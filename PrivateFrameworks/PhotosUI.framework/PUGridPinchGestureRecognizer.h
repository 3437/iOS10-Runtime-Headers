/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer  {
    struct CGPoint { 
        float x; 
        float y; 
    } _touch0InitialLocation;
    struct CGPoint { 
        float x; 
        float y; 
    } _touch1InitialLocation;
    float _lastTransitionProgress;
    unsigned int _transitionDirection;
}

@property(readonly) float transitionProgress;
@property(readonly) struct CGSize { float x1; float x2; } centerOffset;
@property(readonly) unsigned int transitionDirection;
@property(readonly) BOOL transitionShouldFinish;


- (void)_resetTransitionState;
- (BOOL)transitionShouldFinish;
- (struct CGSize { float x1; float x2; })centerOffset;
- (void)reset;
- (void)setState:(int)arg1;
- (float)transitionProgress;
- (unsigned int)transitionDirection;

@end