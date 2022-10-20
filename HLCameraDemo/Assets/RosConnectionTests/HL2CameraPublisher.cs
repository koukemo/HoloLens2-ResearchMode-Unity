using UnityEngine;
using UnityEngine.Windows.WebCam;
using System.Linq;

using RosSharp.RosBridgeClient;

public class HL2CameraPublisher : UnityPublisher<RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage>
{
    public Camera ImageCamera;
    public string FrameId = "HLCamera";
    public int resolutionWidth = 640;
    public int resolutionHeight = 480;
    [Range(0, 100)]
    public int qualityLevel = 50;

    PhotoCapture photoCaptureObject = null;

    private RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage message;
    private Texture2D texture2D;
    private Rect rect;

    protected override void Start()
    {
        base.Start();
        InitializeMessage();
        InitializeGameObject();

        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }

    public void OnClickStart()
    {
        base.Start();
        InitializeMessage();
        InitializeGameObject();   

        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }

    private void FixedUpdate()
    {
        if (texture2D != null)
            UpdateMessage();
    }

    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        photoCaptureObject = captureObject;

        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();

        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        c.cameraResolutionWidth = cameraResolution.width;
        c.cameraResolutionHeight = cameraResolution.height;
        //c.cameraResolutionWidth = resolutionWidth;
        //c.cameraResolutionHeight = resolutionHeight;
        c.pixelFormat = CapturePixelFormat.BGRA32;

        captureObject.StartPhotoModeAsync(c, OnPhotoModeStarted);
    }

    private void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
        }
        else
        {
            Debug.LogError("Unable to start photo mode!");
        }
    }

    void OnCapturedPhotoToMemory(PhotoCapture.PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame) 
    {
        
        if (result.success)
        {            
            // ターゲットテクスチャに RAW 画像データをコピーします
            photoCaptureFrame.UploadImageDataToTexture(texture2D);

            // テクスチャが適用されるゲームオブジェクトを作成
            GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
            Renderer quadRenderer = quad.GetComponent<Renderer>() as Renderer;
            quadRenderer.material = new Material(Shader.Find("Unlit/Texture"));

            quad.transform.parent = this.transform;
            quad.transform.localPosition = new Vector3(0.0f, 0.0f, 5.0f);

            quadRenderer.material.SetTexture("_MainTex", texture2D);
        }

        // カメラを非アクティブにします
        //photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }

    private void InitializeGameObject()
    {
        texture2D = new Texture2D(resolutionWidth, resolutionHeight, TextureFormat.RGB24, false);
        rect = new Rect(0, 0, resolutionWidth, resolutionHeight);
        ImageCamera.targetTexture = new RenderTexture(resolutionWidth, resolutionHeight, 24);
    }

    private void InitializeMessage()
    {
        message = new RosSharp.RosBridgeClient.MessageTypes.Sensor.CompressedImage();
        message.header.frame_id = FrameId;
        message.format = "jpg";
    }

    private void UpdateMessage()
    {
        photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);

        message.header.Update();
        texture2D.ReadPixels(rect, 0, 0);
        message.data = texture2D.EncodeToJPG(qualityLevel);
        Publish(message);
    }
    
    private void OnApplicationQuit()
    {
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

}
