/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSURL, NSError;

@interface GKOpenGraphNode : NSObject  {
    BOOL _liked;
    NSURL *_url;
    unsigned int _numberOfFriendLikes;
    unsigned int _numberOfLikes;
    NSError *_error;
}

@property(readonly) NSURL * url;
@property BOOL liked;
@property unsigned int numberOfFriendLikes;
@property unsigned int numberOfLikes;
@property(retain) NSError * error;

+ (void)openGraphNodeForURL:(id)arg1 handler:(id)arg2;

- (unsigned int)numberOfFriendLikes;
- (void)toggleLikeStatusWithCompletionHandler:(id)arg1;
- (void)clearErrorAndRefetchLikeStatusWithCompletionHandler:(id)arg1;
- (void)sendLikeEventWithCompletionHandler:(id)arg1;
- (void)sendDislikeEventWithCompletionHandler:(id)arg1;
- (unsigned int)numberOfLikes;
- (BOOL)liked;
- (void)setNumberOfLikes:(unsigned int)arg1;
- (void)setNumberOfFriendLikes:(unsigned int)arg1;
- (void)setLiked:(BOOL)arg1;
- (void)fetchLikeStatusWithCompletionHandler:(id)arg1;
- (id)initWithOpenGraphURL:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)setError:(id)arg1;
- (id)error;
- (id)url;

@end