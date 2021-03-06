//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPRebuyDescription, NSString, UIButton, UILabel, UIView;

@interface ESPRestaurantRebuyCell : NVMTableViewCell
{
    _Bool _canOrderFood;
    ESPRebuyDescription *_rebuyDescription;
    CDUnknownBlockType _rebuyAction;
    UIView *_containerView;
    UILabel *_descriptionLabel;
    UILabel *_foodsLabel;
    UIButton *_rebuyButton;
    NSString *_orderID;
}

+ (double)cellHeight;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) UIButton *rebuyButton; // @synthesize rebuyButton=_rebuyButton;
@property(retain, nonatomic) UILabel *foodsLabel; // @synthesize foodsLabel=_foodsLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType rebuyAction; // @synthesize rebuyAction=_rebuyAction;
@property(nonatomic) _Bool canOrderFood; // @synthesize canOrderFood=_canOrderFood;
@property(retain, nonatomic) ESPRebuyDescription *rebuyDescription; // @synthesize rebuyDescription=_rebuyDescription;
- (void).cxx_destruct;
- (void)didPressRebuy:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

