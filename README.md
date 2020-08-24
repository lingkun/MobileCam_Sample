# MobileCam_Sample

#### Sample project(directies or files) list

1. StreamingSampleAlone(dir): Demonstrates how to use the Streaming SDK only, and this is also a good example of how to use the preview stream, The Related documents:
    - [MobilecamSDK architecture introduction](https://www.yuque.com/tinycloud/mobilecamsdk/ieyef3)
    - [How to develop streaming related App](https://www.yuque.com/tinycloud/mobilecamsdk/uqs0h6/edit)
    - [About Samples when using the usb transport]
      - The UI Operations: **SDK Render Over USB**(The main activity) --> **Request Permission --> PreviewActivity**(The premission activity) --> then enter the main preview activity.
      - For this sample, you need to modify the Vendor ID and Product ID in order to match your devices settings, You will get this from the iCatchtek inc.
      - Two basic rools will be helpful to understand this code, if your app want to access the usb, your app must have permission to access such device. if you want to render pictures to the surface, you should wait the surface ready before doing it.
