//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIButton, UIImageView;

@interface KTVGiftRankBoxView : UIView
{
    UIImageView *nodataimg;
    UIButton *nodatatip;
    int _headNum;
    int _fromType;
    id _delgate;
    NSMutableArray *_arraydata;
}

@property(nonatomic) int fromType; // @synthesize fromType=_fromType;
@property(nonatomic) int headNum; // @synthesize headNum=_headNum;
@property(retain, nonatomic) NSMutableArray *arraydata; // @synthesize arraydata=_arraydata;
@property(nonatomic) __weak id delgate; // @synthesize delgate=_delgate;
- (void).cxx_destruct;
- (void)actionGift:(id)arg1;
- (void)noData;
- (void)lookUser:(id)arg1;
- (void)setGiftRank:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
