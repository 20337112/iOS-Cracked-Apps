//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSString, UILabel;

@interface CTHotelOverseaChilrenCountCell : CTCustomeGroupTableViewCell
{
    NSString *_subTitle;
    NSString *_title;
    long long _itemId;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_accessoryLabel;
    long long _type;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithType:(long long)arg1 reuseIdentifier:(id)arg2;

@end

