/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
    unsigned int _diskCapacity;
    unsigned int _memoryCapacity;
    NSString *_persistentIdentifier;
}

@property unsigned int diskCapacity;
@property unsigned int memoryCapacity;
@property(copy) NSString * persistentIdentifier;


- (void)setPersistentIdentifier:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)diskCapacity;
- (unsigned int)memoryCapacity;
- (id)persistentIdentifier;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;

@end