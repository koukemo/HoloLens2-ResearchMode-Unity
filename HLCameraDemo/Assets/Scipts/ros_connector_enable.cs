using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using RosSharp.RosBridgeClient;

public class ros_connector_enable : MonoBehaviour
{
    [SerializeField] private GameObject ros_connector;
    [SerializeField] private GameObject ros_connector_button_controller;
    [SerializeField] private GameObject publish_controller;

    private int click_count = 1;
    private int click_pose_count = 1;
    private int click_contacted_count = 1; 

    private RosConnector ros_connector_script;
    private HL2CameraPublisher hl2_camera_script;

    // Start is called before the first frame update
    void Start() 
    {
       ros_connector_script = ros_connector.GetComponent<RosConnector>();
       hl2_camera_script = ros_connector.GetComponent<HL2CameraPublisher>();
       
       publish_controller.SetActive(false);
       //subscribe_controller.SetActive(false);
       //tf_transform_controller.SetActive(false);
    }

    // Update is called once per frame
    void Update() {}

    public void onClick_ROSConnect()
    {
        // ON(初回クリック) : ROSコネクタを有効
        if (click_count == 1)
        {
            ros_connector.SetActive(true);

            //console_controller.SetActive(true);
            //ip_controller.SetActive(false);
            publish_controller.SetActive(true);
            ros_connector_button_controller.SetActive(false);
            //subscribe_controller.SetActive(true);
        }
    }

    // ON : Publisherを有効
    public void onClick_HL2CameraActive()
    {
        hl2_camera_script.enabled = true;

        publish_controller.SetActive(false);
    }
}