//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface CTTrainOrderDetailQiangSpeedUpView : UIView
{
    id <CTTrainOrderDetailQiangSpeedUpViewDelegate> _delegate;
    NSString *_jumpURL;
    NSString *_logCode;
    UILabel *_textLabel;
    UIButton *_tapButton;
}

+ (double)viewHeightWithText:(id)arg1;
@property(retain, nonatomic) UIButton *tapButton; // @synthesize tapButton=_tapButton;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(copy, nonatomic) NSString *logCode; // @synthesize logCode=_logCode;
@property(copy, nonatomic) NSString *jumpURL; // @synthesize jumpURL=_jumpURL;
@property(nonatomic) __weak id <CTTrainOrderDetailQiangSpeedUpViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapAction;
- (id)initWithFrame:(struct CGRect)arg1 withText:(id)arg2;

@end

