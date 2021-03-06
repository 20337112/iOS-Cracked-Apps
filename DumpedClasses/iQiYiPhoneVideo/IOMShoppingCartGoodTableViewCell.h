//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IOMButton, IOMShoppingCartCalculateView, IOMShoppingCartGoodsObject, UIButton, UIImageView, UILabel, UIView;

@interface IOMShoppingCartGoodTableViewCell : UITableViewCell
{
    _Bool _isAllEditMode;
    IOMShoppingCartCalculateView *_calculateView;
    CDUnknownBlockType _handleCellChooseButtonAction;
    CDUnknownBlockType _handleCellDeleteButtonAction;
    UIView *_customContentView;
    IOMButton *_chooseButton;
    UIImageView *_goodsImageView;
    UILabel *_warmingLabel;
    UILabel *_goodsTitleLabel;
    UILabel *_specificationLabel;
    UILabel *_priceLabel;
    UILabel *_limitLabel;
    UIButton *_deleteButton;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_whiteLine;
    IOMShoppingCartGoodsObject *_goodsItem;
}

+ (double)cellViewHeight;
@property(nonatomic) _Bool isAllEditMode; // @synthesize isAllEditMode=_isAllEditMode;
@property(retain, nonatomic) IOMShoppingCartGoodsObject *goodsItem; // @synthesize goodsItem=_goodsItem;
@property(retain, nonatomic) UIView *whiteLine; // @synthesize whiteLine=_whiteLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *limitLabel; // @synthesize limitLabel=_limitLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *specificationLabel; // @synthesize specificationLabel=_specificationLabel;
@property(retain, nonatomic) UILabel *goodsTitleLabel; // @synthesize goodsTitleLabel=_goodsTitleLabel;
@property(retain, nonatomic) UILabel *warmingLabel; // @synthesize warmingLabel=_warmingLabel;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) IOMButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(copy, nonatomic) CDUnknownBlockType handleCellDeleteButtonAction; // @synthesize handleCellDeleteButtonAction=_handleCellDeleteButtonAction;
@property(copy, nonatomic) CDUnknownBlockType handleCellChooseButtonAction; // @synthesize handleCellChooseButtonAction=_handleCellChooseButtonAction;
@property(retain, nonatomic) IOMShoppingCartCalculateView *calculateView; // @synthesize calculateView=_calculateView;
- (void).cxx_destruct;
- (void)__commonInit;
- (void)deleteButtonAction:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)chooseButtonAction:(id)arg1;
- (void)configUI:(id)arg1 cellForRowAtIndexPath:(id)arg2 isAllEditMode:(_Bool)arg3;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

