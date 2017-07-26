//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "UITextViewDelegate.h"

@class NSString, TravelPlanDayDetailModel, UIButton, UILabel, UIScrollView, UITextView, UIView;

@interface CTDestPackagesEditSectionHeadView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    id <CTDestPackagesEditPressAddBtnDelegate> _delegate;
    UIScrollView *_bgScrollView;
    UIView *_customView;
    UILabel *_destTimeLabel;
    UIButton *_delBtn;
    UIButton *_addBtn;
    UIView *_memoView;
    UIButton *_editBtn;
    UIView *_memoTextBgView;
    UITextView *_memoTextView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    TravelPlanDayDetailModel *_dayModel;
}

+ (double)editSectionViewHeight;
@property(retain, nonatomic) TravelPlanDayDetailModel *dayModel; // @synthesize dayModel=_dayModel;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UITextView *memoTextView; // @synthesize memoTextView=_memoTextView;
@property(retain, nonatomic) UIView *memoTextBgView; // @synthesize memoTextBgView=_memoTextBgView;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIView *memoView; // @synthesize memoView=_memoView;
@property(retain, nonatomic) UIButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UILabel *destTimeLabel; // @synthesize destTimeLabel=_destTimeLabel;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView=_bgScrollView;
@property(nonatomic) __weak id <CTDestPackagesEditPressAddBtnDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)pressDeleteBtn;
- (void)pressControlBtn;
- (void)pressEditMemoBtn;
- (void)fillHeadViewByRoute:(id)arg1 dayIndex:(int)arg2 memo:(id)arg3 dayModel:(id)arg4;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

