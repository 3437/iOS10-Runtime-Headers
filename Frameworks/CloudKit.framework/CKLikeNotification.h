/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class CKSharedItemID, NSString, CKShareID;

@interface CKLikeNotification : CKNotification <NSSecureCoding> {
    bool_isLike;
    CKShareID *_shareID;
    CKSharedItemID *_likedItemID;
    NSString *_likingUserID;
}

@property(copy) CKShareID * shareID;
@property(copy) CKSharedItemID * likedItemID;
@property(copy) NSString * likingUserID;
@property bool isLike;

+ (bool)supportsSecureCoding;

- (void)setLikedItemID:(id)arg1;
- (bool)isLike;
- (id)likingUserID;
- (id)likedItemID;
- (void)setIsLike:(bool)arg1;
- (void)setLikingUserID:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)CKPropertiesDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end