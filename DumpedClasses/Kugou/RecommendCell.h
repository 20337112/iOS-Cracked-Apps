//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class KGFollowButton, KGThemeImageView, KGThemeLabel, SingerEntity, UIView;

@interface RecommendCell : MusicBaseCell
{
    KGThemeImageView *_headView;
    KGThemeLabel *_nameLabel;
    KGThemeLabel *_contentLabel;
    KGFollowButton *_followBtn;
    UIView *_kugouSingerIcon;
    SingerEntity *_entity;
    UIView *_labelMarginView;
}

+ (id)reusableIdentifier;
+ (double)cellHeight;
@property(retain, nonatomic) UIView *labelMarginView; // @synthesize labelMarginView=_labelMarginView;
@property(readonly, nonatomic) SingerEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) UIView *kugouSingerIcon; // @synthesize kugouSingerIcon=_kugouSingerIcon;
@property(retain, nonatomic) KGFollowButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) KGThemeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) KGThemeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) KGThemeImageView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)configData;
- (void)buildData:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (void)dealloc;
- (void)onChangeTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
