//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTFlightUseCarPassengerCell : UITableViewCell
{
    NSLayoutConstraint *_separateLineHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UILabel *_phoneLabel;
    UIView *_bgContView;
    NSLayoutConstraint *_rightContentLeftCons;
    UIImageView *_iconArrow;
}

+ (double)setupCell:(id)arg1 withModel:(id)arg2 isLastCell:(_Bool)arg3;
@property(nonatomic) __weak UIImageView *iconArrow; // @synthesize iconArrow=_iconArrow;
@property(nonatomic) __weak NSLayoutConstraint *rightContentLeftCons; // @synthesize rightContentLeftCons=_rightContentLeftCons;
@property(nonatomic) __weak UIView *bgContView; // @synthesize bgContView=_bgContView;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *separateLineHeightConstraint; // @synthesize separateLineHeightConstraint=_separateLineHeightConstraint;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

