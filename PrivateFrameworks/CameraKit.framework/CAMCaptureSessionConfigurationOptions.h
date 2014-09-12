/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCaptureSessionConfigurationOptions : NSObject  {
    bool_HDRDetectionEnabled;
    bool_use60FPSVideo;
    bool_useAlternateSlomoFront;
    bool_useAlternateSlomoRear;
}

@property(readonly) bool HDRDetectionEnabled;
@property(readonly) bool use60FPSVideo;
@property(readonly) bool useAlternateSlomoFront;
@property(readonly) bool useAlternateSlomoRear;


- (bool)HDRDetectionEnabled;
- (id)initWithHDRDetectionEnabled:(bool)arg1 use60FPSVideo:(bool)arg2 useAlternateSlomoFront:(bool)arg3 useAlternateSlomoRear:(bool)arg4;
- (bool)use60FPSVideo;
- (bool)useAlternateSlomoRear;
- (bool)useAlternateSlomoFront;
- (id)init;

@end