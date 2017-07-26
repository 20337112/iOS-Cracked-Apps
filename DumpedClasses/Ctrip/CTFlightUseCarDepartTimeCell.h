//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTFlightPickerLabel, NSLayoutConstraint, UIImageView, UILabel;

@interface CTFlightUseCarDepartTimeCell : UITableViewCell
{
    CTFlightPickerLabel *_timeLabel;
    NSLayoutConstraint *_separateLineHeightConstraint;
    UILabel *_titleLabel;
    NSLayoutConstraint *_rightContentLeftCons;
    UIImageView *_iconArrow;
}

+ (double)setupCell:(id)arg1 withDate:(id)arg2;
@property(nonatomic) __weak UIImageView *iconArrow; // @synthesize iconArrow=_iconArrow;
@property(nonatomic) __weak NSLayoutConstraint *rightContentLeftCons; // @synthesize rightContentLeftCons=_rightContentLeftCons;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *separateLineHeightConstraint; // @synthesize separateLineHeightConstraint=_separateLineHeightConstraint;
@property(retain, nonatomic) CTFlightPickerLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

