//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMActionSheetBackgroundView, UIImage, UIImageView, UILabel;

@interface NMIpodProgressView : UIView
{
    NMActionSheetBackgroundView *_statusView;
    UIImageView *_progressView;
    UIImageView *_progressBar;
    UILabel *_textLabel;
    UIView *_maskView;
    UIImage *_normalImage;
    UIImage *_abnormalImage;
    double _progress;
}

+ (double)viewHeight;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)updateState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
