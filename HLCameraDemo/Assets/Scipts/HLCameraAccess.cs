using UnityEngine;
using UnityEngine.Windows.WebCam;
using System.Linq;
using UnityEngine.XR;

public class HLCameraAccess: MonoBehaviour
{
    PhotoCapture photoCaptureObject = null;
    void Start()
    {
        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);
    }
    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        photoCaptureObject = captureObject;

        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();

        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        c.cameraResolutionWidth = cameraResolution.width;
        c.cameraResolutionHeight = cameraResolution.height;
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
            Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
            Texture2D targetTexture = new Texture2D(cameraResolution.width, cameraResolution.height);
            
            // ターゲットテクスチャに RAW 画像データをコピーします
            photoCaptureFrame.UploadImageDataToTexture(targetTexture);

            // テクスチャが適用されるゲームオブジェクトを作成
            GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
            Renderer quadRenderer = quad.GetComponent<Renderer>() as Renderer;
            quadRenderer.material = new Material(Shader.Find("Custom/Unlit/UnlitTexture"));

            quad.transform.parent = this.transform;
            quad.transform.localPosition = new Vector3(0.0f, 0.0f, 5.0f);

            quadRenderer.material.SetTexture("_MainTex", targetTexture);
        }

        // カメラを非アクティブにします
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }
}