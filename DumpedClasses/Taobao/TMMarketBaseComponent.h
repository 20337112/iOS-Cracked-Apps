//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "BUComponentProtocol.h"
#import "TMMuiLazyScrollViewCellProtocol.h"
#import "TangramYosemiteEasyElementProtocol.h"

@class BUniversalAction, NSArray, NSString, TangramBus, TangramYosemiteItemModel, UIView<TangramLayoutProtocol>;

@interface TMMarketBaseComponent : UIControl <BUComponentProtocol, TangramYosemiteEasyElementProtocol, TMMuiLazyScrollViewCellProtocol>
{
    unsigned long long _type;
    NSString *_bgColor;
    BUniversalAction *_action;
    CDUnknownBlockType _clickBlock;
    NSString *_bgStartColor;
    NSString *_bgEndColor;
    double _bgCornerRadius;
    NSArray *_margin;
    TangramYosemiteItemModel *_itemModel;
    UIView<TangramLayoutProtocol> *_atLayout;
    TangramBus *_tangramBus;
    CDUnknownBlockType _onBindCallback;
}

@property(copy, nonatomic) CDUnknownBlockType onBindCallback; // @synthesize onBindCallback=_onBindCallback;
@property(nonatomic) __weak TangramBus *tangramBus; // @synthesize tangramBus=_tangramBus;
@property(nonatomic) __weak UIView<TangramLayoutProtocol> *atLayout; // @synthesize atLayout=_atLayout;
@property(retain, nonatomic) TangramYosemiteItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) NSArray *margin; // @synthesize margin=_margin;
@property(nonatomic) double bgCornerRadius; // @synthesize bgCornerRadius=_bgCornerRadius;
@property(copy, nonatomic) NSString *bgEndColor; // @synthesize bgEndColor=_bgEndColor;
@property(copy, nonatomic) NSString *bgStartColor; // @synthesize bgStartColor=_bgStartColor;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(readonly, nonatomic) BUniversalAction *action; // @synthesize action=_action;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mui_didEnterWithTimes:(unsigned long long)arg1;
- (void)registerTangramElementOnBindCallback:(CDUnknownBlockType)arg1;
- (void)sendClickAction;
- (void)sendClickActionWithUserInfo:(id)arg1;
- (void)sendAction:(int)arg1 userInfo:(id)arg2;
- (void)componentHasClicked;
- (void)bindFlare:(id)arg1 cid:(id)arg2;
- (void)componentWillShowWithIsReload:(_Bool)arg1;
- (void)calculateLayout;
- (void)bindFlare;
- (void)setupAction;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
