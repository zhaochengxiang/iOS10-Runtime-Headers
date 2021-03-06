/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.SmallSummaryView : UIView {
    void allHappenToday;
    void allHappenTomorrow;
    void label;
    void numberOfEvents;
    void time;
}

@property (nonatomic) bool allHappenToday;
@property (nonatomic) bool allHappenTomorrow;
@property (nonatomic, retain) NSDate *time;

- (id /* block */).cxx_destruct;
- (bool)allHappenToday;
- (bool)allHappenTomorrow;
- (double)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (void)setAllHappenToday:(bool)arg1;
- (void)setAllHappenTomorrow:(bool)arg1;
- (void)setTime:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)time;

@end
