/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUClassInfoMap : NSObject <NSCoding> {
    void *_cppMap;
}

+ (id)infoMap;
+ (void)initialize;

- (void)addClassInfosFromMap:(id)arg1;
- (void)enumerateWithBlock:(id)arg1;
- (void)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2;
- (id)classInfoForAddress:(unsigned long long)arg1;
- (id)init;
- (unsigned int)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

@end