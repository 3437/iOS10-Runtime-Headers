/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic, DKDiagnostic_Internal, NSExtensionRequestHandling> {
    CXCallObserver * _callObserver;
    bool  _cancelled;
    DKDiagnosticContext * _context;
    bool  _finished;
    NSLock * _finishedLock;
    NSDictionary * _parameters;
    NSDictionary * _predicates;
    DKMutableResult * _result;
    NSDictionary * _specifications;
}

@property (nonatomic, retain) CXCallObserver *callObserver;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, retain) DKDiagnosticContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic) bool finished;
@property (nonatomic, retain) NSLock *finishedLock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) NSDictionary *predicates;
@property (nonatomic, retain) DKMutableResult *result;
@property (nonatomic, readonly) NSDictionary *specifications;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)callObserver;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)cancel;
- (id)context;
- (id)finishedLock;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (void)monitorIncomingCall;
- (id)parameters;
- (id)predicates;
- (id)result;
- (void)setCallObserver:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setFinishedLock:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setupWithContext:(id)arg1;
- (id)specifications;
- (void)start;

@end