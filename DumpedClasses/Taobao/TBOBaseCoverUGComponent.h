//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseUGCComponent.h"

@class TBOUGCSelectedImageView;

@interface TBOBaseCoverUGComponent : TBOBaseUGCComponent
{
    TBOUGCSelectedImageView *_selectImageView;
    unsigned long long _maxNum;
    unsigned long long _minNum;
}

+ (id)componentName;
@property(readonly, nonatomic) unsigned long long minNum; // @synthesize minNum=_minNum;
@property(readonly, nonatomic) unsigned long long maxNum; // @synthesize maxNum=_maxNum;
@property(retain, nonatomic) TBOUGCSelectedImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
- (void).cxx_destruct;
- (void)updateTitle;
- (id)getMyItems;
- (_Bool)isMyItemView:(id)arg1;
- (void)applyData:(id)arg1;
- (_Bool)isValid;
- (void)applyStyle:(id)arg1;
- (void)setNeedsLayout;
- (void)dealloc;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

