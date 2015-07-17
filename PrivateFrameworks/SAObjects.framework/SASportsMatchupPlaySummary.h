/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (nonatomic) BOOL appliesToAwayTeam;
@property (nonatomic) BOOL appliesToHomeTeam;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *summaryDescription;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *time;

+ (id)matchupPlaySummary;
+ (id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2;

- (BOOL)appliesToAwayTeam;
- (BOOL)appliesToHomeTeam;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nonFormattedTime;
- (id)offensivePlayer;
- (void)setAppliesToAwayTeam:(BOOL)arg1;
- (void)setAppliesToHomeTeam:(BOOL)arg1;
- (void)setNonFormattedTime:(id)arg1;
- (void)setOffensivePlayer:(id)arg1;
- (void)setSummaryDescription:(id)arg1;
- (void)setTime:(id)arg1;
- (id)summaryDescription;
- (id)time;

@end