/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingEventEntry : PLEntry {
    PLAccountingRange * _range;
    bool  _used;
}

@property (nonatomic, readonly) int instanceDirectionality;
@property (nonatomic, retain) PLAccountingRange *range;
@property (nonatomic) bool used;

+ (int)classDirectionality;

- (void).cxx_destruct;
- (bool)canMergeWithEvent:(id)arg1;
- (id)initWithRange:(id)arg1;
- (int)instanceDirectionality;
- (bool)isEmptyEvent;
- (bool)isEqualContentsWithEvent:(id)arg1;
- (void)mergeWithEvent:(id)arg1;
- (id)range;
- (id)rangeSinceEvent:(id)arg1;
- (void)setRange:(id)arg1;
- (void)setUsed:(bool)arg1;
- (bool)used;

@end
