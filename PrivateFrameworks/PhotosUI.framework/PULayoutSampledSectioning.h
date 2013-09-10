/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray;

@interface PULayoutSampledSectioning : PULayoutSectioning  {
    BOOL _sectioningIsValid;
    BOOL _samplingIsValid;
    int _numberOfRealSections;
    int _numberOfVisualSections;
    NSArray *_realSectionIndexesForVisualSection;
    int *_visualSectionForRealSection;
    int *_numberOfItemsForRealSection;
    int *_numberOfRealItemsForVisualSection;
    int *_startIndexInVisualSectionForRealSection;
    id *_sectionSamplers;
    int *_maximumNumberOfVisibleItemsForVisualSection;
    BOOL _hasSomeSampling;
    int _lastHitRealSectionIndex;
    int _lastHitVisualSectionIndex;
    int _lastHitRangeIndex;
    BOOL _supportsSamplingAndSectionGrouping;
}

@property BOOL supportsSamplingAndSectionGrouping;


- (BOOL)supportsSamplingAndSectionGrouping;
- (int)_visualItemIndexForUnsampledItemIndex:(int)arg1 visualSection:(int)arg2 isMainItem:(BOOL*)arg3;
- (struct PUSimpleIndexPath { int x1; int x2; })_mainRealItemIndexPathForVisualSection:(int)arg1 andUnsampledItemIndex:(int)arg2;
- (int)_unsampledItemIndexForVisualItemIndex:(int)arg1 visualSection:(int)arg2;
- (id)_sectionSamplerForVisualSection:(int)arg1;
- (void)_cacheSectioningIfNeeded;
- (void)_discardSectioningCache;
- (void)_discardSamplingCache;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)arg1;
- (BOOL)hasSomeSampling;
- (int)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (int)numberOfRealItemsInVisualSection:(int)arg1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(int)arg1 inVisualItemRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usingBlock:(id)arg3;
- (struct PUSimpleIndexPath { int x1; int x2; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1 isMainItem:(BOOL*)arg2;
- (struct PUSimpleIndexPath { int x1; int x2; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { int x1; int x2; })arg1;
- (void)invalidateSections;
- (void)invalidateSampling;
- (void)setSupportsSamplingAndSectionGrouping:(BOOL)arg1;
- (int)numberOfVisualItemsInVisualSection:(int)arg1;
- (void)enumerateRealSectionsForVisualSection:(int)arg1 usingBlock:(id)arg2;
- (int)mainRealSectionForVisualSection:(int)arg1;
- (int)visualSectionForRealSection:(int)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end