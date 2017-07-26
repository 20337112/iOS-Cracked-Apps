//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

@class UIButton, UIImageView, UILabel, WeChatInfoModel;

@interface CTDestWeChatCell : CTDestBaseCell
{
    CDUnknownBlockType _weChatBlock;
    UIImageView *_iconIV;
    UILabel *_contentLb;
    UIImageView *_arrowIV;
    UIButton *_tapBt;
    UIImageView *_newIv;
    WeChatInfoModel *_weChatModel;
}

+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) WeChatInfoModel *weChatModel; // @synthesize weChatModel=_weChatModel;
@property(retain, nonatomic) UIImageView *newIv; // @synthesize newIv=_newIv;
@property(retain, nonatomic) UIButton *tapBt; // @synthesize tapBt=_tapBt;
@property(retain, nonatomic) UIImageView *arrowIV; // @synthesize arrowIV=_arrowIV;
@property(retain, nonatomic) UILabel *contentLb; // @synthesize contentLb=_contentLb;
@property(retain, nonatomic) UIImageView *iconIV; // @synthesize iconIV=_iconIV;
@property(copy, nonatomic) CDUnknownBlockType weChatBlock; // @synthesize weChatBlock=_weChatBlock;
- (void).cxx_destruct;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)setRedDotHidden;
- (void)buttonTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

