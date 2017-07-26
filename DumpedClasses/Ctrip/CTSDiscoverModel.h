//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTSDiscoverModel : NSObject
{
    int _moduleType;
    int _dependentSource;
    NSString *_discoveryId;
    NSString *_title;
    long long _titleLineNumber;
    NSString *_subTile;
    long long _subLineNumber;
    NSString *_imageUrl;
    NSString *_mark;
    NSString *_authImage;
    NSString *_authName;
    NSString *_city;
    NSString *_leftBottomStr1;
    long long _lbStr1Color;
    NSString *_leftBottomStr2;
    NSString *_countStr;
    NSString *_rightBottomTag;
    NSString *_jumpUrl;
    id _extendData;
    NSString *_actionCode;
    NSString *_bIActionValue;
}

+ (id)modelWithDiscoverItem:(id)arg1;
@property(copy, nonatomic) NSString *bIActionValue; // @synthesize bIActionValue=_bIActionValue;
@property(nonatomic) int dependentSource; // @synthesize dependentSource=_dependentSource;
@property(copy, nonatomic) NSString *actionCode; // @synthesize actionCode=_actionCode;
@property(retain, nonatomic) id extendData; // @synthesize extendData=_extendData;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *rightBottomTag; // @synthesize rightBottomTag=_rightBottomTag;
@property(copy, nonatomic) NSString *countStr; // @synthesize countStr=_countStr;
@property(copy, nonatomic) NSString *leftBottomStr2; // @synthesize leftBottomStr2=_leftBottomStr2;
@property(nonatomic) long long lbStr1Color; // @synthesize lbStr1Color=_lbStr1Color;
@property(copy, nonatomic) NSString *leftBottomStr1; // @synthesize leftBottomStr1=_leftBottomStr1;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *authName; // @synthesize authName=_authName;
@property(copy, nonatomic) NSString *authImage; // @synthesize authImage=_authImage;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long subLineNumber; // @synthesize subLineNumber=_subLineNumber;
@property(copy, nonatomic) NSString *subTile; // @synthesize subTile=_subTile;
@property(nonatomic) long long titleLineNumber; // @synthesize titleLineNumber=_titleLineNumber;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int moduleType; // @synthesize moduleType=_moduleType;
@property(copy, nonatomic) NSString *discoveryId; // @synthesize discoveryId=_discoveryId;
- (void).cxx_destruct;
- (void)convertDataFromFoodPGC:(id)arg1;
- (void)convertDataFromHHTravel:(id)arg1;
- (void)convertDataFromSmilin:(id)arg1;
- (void)convertDataFromMoreInn:(id)arg1;
- (void)convertDataFromMoreHotel:(id)arg1;
- (void)convertDataFromMoreFlight:(id)arg1;
- (void)convertDataFromActivity:(id)arg1;
- (void)convertDataFromSpecialInn:(id)arg1;
- (void)convertDataFromSpecialPriceHotel:(id)arg1;
- (void)convertDataFromSpecialPriceFlight:(id)arg1;
- (void)convertDataFromTicketTopic:(id)arg1;
- (void)convertDataFromWeekendAlbum:(id)arg1;
- (void)convertDataFromTravelNews:(id)arg1;
- (void)convertDataFromCommonTravel:(id)arg1;
- (id)init;

@end

