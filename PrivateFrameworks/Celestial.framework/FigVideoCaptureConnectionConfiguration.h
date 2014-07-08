/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigVideoCaptureConnectionConfiguration : FigCaptureConnectionConfiguration  {
    int _outputFormat;
    int _outputWidth;
    int _outputHeight;
    int _videoStabilizationEnabled;
    bool_mirroringEnabled;
    int _orientation;
    int _retainedBufferCount;
}

@property int outputFormat;
@property int outputWidth;
@property int outputHeight;
@property int videoStabilizationEnabled;
@property bool mirroringEnabled;
@property int orientation;
@property int retainedBufferCount;


- (void)setRetainedBufferCount:(int)arg1;
- (void)setVideoStabilizationEnabled:(int)arg1;
- (void)setOutputHeight:(int)arg1;
- (void)setOutputWidth:(int)arg1;
- (int)retainedBufferCount;
- (bool)mirroringEnabled;
- (int)videoStabilizationEnabled;
- (int)outputHeight;
- (int)outputWidth;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (int)orientation;
- (void)setOutputFormat:(int)arg1;
- (void)setMirroringEnabled:(bool)arg1;
- (void)setOrientation:(int)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)outputFormat;

@end