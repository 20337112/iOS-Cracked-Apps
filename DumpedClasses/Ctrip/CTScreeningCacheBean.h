//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CTScreeningCacheBean : CTCacheBean
{
    _Bool _isBaiduRecommend;
    NSMutableDictionary *_standardFilterList;
    NSArray *_keywordList;
    NSArray *_extraKeywordList;
    NSArray *_searchEngineKeywordList;
    NSMutableArray *_hotelBussinessZoneItemList;
}

+ (void)resetHasNextTab:(id)arg1;
+ (void)clean;
+ (id)getInstance;
@property(nonatomic) _Bool isBaiduRecommend; // @synthesize isBaiduRecommend=_isBaiduRecommend;
@property(retain, nonatomic) NSMutableArray *hotelBussinessZoneItemList; // @synthesize hotelBussinessZoneItemList=_hotelBussinessZoneItemList;
@property(retain, nonatomic) NSArray *searchEngineKeywordList; // @synthesize searchEngineKeywordList=_searchEngineKeywordList;
@property(retain, nonatomic) NSArray *extraKeywordList; // @synthesize extraKeywordList=_extraKeywordList;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) NSMutableDictionary *standardFilterList; // @synthesize standardFilterList=_standardFilterList;
- (void).cxx_destruct;
- (id)getDistanceList:(int)arg1;
- (id)getDistanceList;
- (id)getSpecialHotLandmarklList:(int)arg1 dataID:(id)arg2;
- (id)getStarListWithEHotelType:(int)arg1;
- (id)getPriceListWithEHotelType:(int)arg1;
- (void)initCache;
- (id)init;

@end

