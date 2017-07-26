//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface CTFlightInlandDeliveryCoverCell : UITableViewCell
{
    UILabel *_lbTitle;
    UILabel *_lbSubTitle;
    UIImageView *_iconInfo;
    UIButton *_btnInfo;
    UIImageView *_imgCheck;
    UIView *_bgView;
    CDUnknownBlockType _callback;
}

+ (double)setupCellWithTitle:(id)arg1 title:(id)arg2 titleTip:(id)arg3 subTitle:(id)arg4 titleColor:(id)arg5 isSectionTitleCell:(_Bool)arg6 infoCallback:(CDUnknownBlockType)arg7;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIImageView *imgCheck; // @synthesize imgCheck=_imgCheck;
@property(nonatomic) __weak UIButton *btnInfo; // @synthesize btnInfo=_btnInfo;
@property(nonatomic) __weak UIImageView *iconInfo; // @synthesize iconInfo=_iconInfo;
@property(nonatomic) __weak UILabel *lbSubTitle; // @synthesize lbSubTitle=_lbSubTitle;
@property(nonatomic) __weak UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
- (void).cxx_destruct;
- (void)setChecked:(_Bool)arg1;
- (void)tapInfo:(id)arg1;

@end

