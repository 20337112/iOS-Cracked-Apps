//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface TBSpecialActivityListDescTableViewCell : UITableViewCell
{
    UILabel *_leftLabel;
    UILabel *_rightLable;
    UILabel *_ActivityDescLabel;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILabel *ActivityDescLabel; // @synthesize ActivityDescLabel=_ActivityDescLabel;
@property(retain, nonatomic) UILabel *rightLable; // @synthesize rightLable=_rightLable;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)setActivityDescLabelText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

