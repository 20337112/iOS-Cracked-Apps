//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionBlockViewModel.h"

@class NSString, TGDetailItemModel;

@interface TGRelatedProductBlockViewModel : TGCollectionBlockViewModel
{
    _Bool _isPlaceholder;
    TGDetailItemModel *_model;
}

@property(retain, nonatomic) TGDetailItemModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *price;
@property(readonly, nonatomic) NSString *imageUrl;
- (id)init;
- (id)initWithDetailItemModel:(id)arg1;

@end

