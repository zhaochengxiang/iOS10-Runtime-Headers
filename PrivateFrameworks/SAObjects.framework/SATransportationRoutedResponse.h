/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSArray, SACalendar;

@interface SATransportationRoutedResponse : SATransportationResponse  {
}

@property(retain) SACalendar * estimatedTime;
@property(copy) NSURL * mapIdentifier;
@property(copy) NSArray * wayPointItems;

+ (id)routedResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)routedResponse;

- (void)setWayPointItems:(id)arg1;
- (id)wayPointItems;
- (void)setMapIdentifier:(id)arg1;
- (id)mapIdentifier;
- (void)setEstimatedTime:(id)arg1;
- (id)estimatedTime;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;

@end