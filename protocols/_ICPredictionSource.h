/* Generated by RuntimeBrowser.
 */

@protocol _ICPredictionSource

@required

- (void)connectionsPredictionsWithProactiveTrigger:(void *)arg1 searchContext:(void *)arg2 limit:(void *)arg3 timeout:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: _ICProactiveTrigger *, _ICSearchContext *, unsigned long long, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)eventPredictionsWithProactiveTrigger:(void *)arg1 searchContext:(void *)arg2 limit:(void *)arg3 timeout:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: _ICProactiveTrigger *, _ICSearchContext *, unsigned long long, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)namesWithContactsLimit:(void *)arg1 withFoundLimit:(void *)arg2 timeout:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 10: unsigned long long, unsigned long long, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)peoplePredictionsWithProactiveTrigger:(void *)arg1 searchContext:(void *)arg2 limit:(void *)arg3 timeout:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: _ICProactiveTrigger *, _ICSearchContext *, unsigned long long, float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
