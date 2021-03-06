//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMyTaobaoRecommendMenu, UILabel, UIView;

@interface TBMyTaobaoRecommendMask : NSObject
{
    UILabel *_btnTitle;
    CDUnknownBlockType _onAddRecommendBtnClick;
    CDUnknownBlockType _onIgnoreRecommendBtnClick;
    UIView *_recommendContainer;
    UIView *_moreContainer;
    TBMyTaobaoRecommendMenu *_menu;
}

@property(retain, nonatomic) TBMyTaobaoRecommendMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIView *moreContainer; // @synthesize moreContainer=_moreContainer;
@property(retain, nonatomic) UIView *recommendContainer; // @synthesize recommendContainer=_recommendContainer;
@property(copy, nonatomic) CDUnknownBlockType onIgnoreRecommendBtnClick; // @synthesize onIgnoreRecommendBtnClick=_onIgnoreRecommendBtnClick;
@property(copy, nonatomic) CDUnknownBlockType onAddRecommendBtnClick; // @synthesize onAddRecommendBtnClick=_onAddRecommendBtnClick;
- (void).cxx_destruct;
- (void)reset;
- (void)show:(_Bool)arg1;
- (void)onMoreBtnClick:(id)arg1;
- (void)onRecommendAddBtnClick:(id)arg1;
- (id)initWithContainer:(id)arg1;

@end

