//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIImageView, UILabel;

@interface CTFlightPassengerCardTitleCell : CTCustomeGroupTableViewCell
{
    UILabel *_cardTitleLabel;
    UILabel *_cardNameLabel;
    UIImageView *_rightArrow;
}

@property(nonatomic) __weak UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UILabel *cardNameLabel; // @synthesize cardNameLabel=_cardNameLabel;
@property(retain, nonatomic) UILabel *cardTitleLabel; // @synthesize cardTitleLabel=_cardTitleLabel;
- (void).cxx_destruct;
- (void)setCardTitle:(id)arg1 cardName:(id)arg2;
- (void)awakeFromNib;

@end

