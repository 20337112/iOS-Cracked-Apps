//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel;

@interface CTTrainMiaoShaGuideViewController : CTRootViewController
{
    _Bool _allDayQiangPiao;
    id <CTTrainMiaoShaGuideViewControllerDelegate> _delegate;
    UIImageView *_image1;
    UIImageView *_image2;
    UIImageView *_image3;
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UIButton *_buttonQiangPiao;
    NSLayoutConstraint *_buttonTop;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonTop; // @synthesize buttonTop=_buttonTop;
@property(retain, nonatomic) UIButton *buttonQiangPiao; // @synthesize buttonQiangPiao=_buttonQiangPiao;
@property(retain, nonatomic) UILabel *label3; // @synthesize label3=_label3;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
@property(retain, nonatomic) UIImageView *image3; // @synthesize image3=_image3;
@property(retain, nonatomic) UIImageView *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) UIImageView *image1; // @synthesize image1=_image1;
@property(nonatomic) _Bool allDayQiangPiao; // @synthesize allDayQiangPiao=_allDayQiangPiao;
@property(nonatomic) __weak id <CTTrainMiaoShaGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onQiangPiaoButton:(id)arg1;
- (void)onBackButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

