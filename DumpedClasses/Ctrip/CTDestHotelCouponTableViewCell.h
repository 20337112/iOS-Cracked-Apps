//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface CTDestHotelCouponTableViewCell : UITableViewCell
{
    UIImageView *_cardIv;
    UILabel *_cashBackLb;
    UILabel *_priceLb;
    UILabel *_descLb;
    UIImageView *_arrowIv;
    UIView *_flagView;
}

+ (double)heightForCell;
@property(retain, nonatomic) UIView *flagView; // @synthesize flagView=_flagView;
@property(retain, nonatomic) UIImageView *arrowIv; // @synthesize arrowIv=_arrowIv;
@property(retain, nonatomic) UILabel *descLb; // @synthesize descLb=_descLb;
@property(retain, nonatomic) UILabel *priceLb; // @synthesize priceLb=_priceLb;
@property(retain, nonatomic) UILabel *cashBackLb; // @synthesize cashBackLb=_cashBackLb;
@property(retain, nonatomic) UIImageView *cardIv; // @synthesize cardIv=_cardIv;
- (void).cxx_destruct;
- (void)refreshCellWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

