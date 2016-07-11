/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAJobConstraintsObserver : NSObject {
    PHAJobConstraints * _currentConstraints;
    <PHAJobConstraintsObserverDelegate> * _delegate;
}

@property (nonatomic, retain) PHAJobConstraints *currentConstraints;
@property (nonatomic) <PHAJobConstraintsObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleBackgroundProcessingAllowedNotification:(id)arg1;
- (void)_handleBackgroundProcessingDisallowedNotification:(id)arg1;
- (id)acceptConstraints:(id)arg1 mask:(id)arg2;
- (id)currentConstraints;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithInitialConstraints:(id)arg1 delegate:(id)arg2;
- (void)setCurrentConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;

@end