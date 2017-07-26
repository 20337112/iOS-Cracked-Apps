//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTDiscoverCityInfoModel, NSMutableArray, NSString;

@interface CTDiscoverHomeDataCenter : NSObject
{
    int _CityStatus;
    int _SaleCityID;
    int _DistrictId;
    CTDiscoverCityInfoModel *_CityInfo;
    NSString *_ABType;
    NSString *_SequenceId;
    NSString *_Slogan;
    CTDiscoverCityInfoModel *_headerCityModel;
    NSMutableArray *_TravelCityInfos;
    NSMutableArray *_HotCityInfos;
    NSMutableArray *_hotArticlesList;
    NSMutableArray *_hotelAlbumAndProductList;
    NSMutableArray *_travelAlbumAndProductList;
    NSMutableArray *_weekendAlbumAndProductList;
    NSMutableArray *_productList;
    NSMutableArray *_DiscAlbums;
    NSMutableArray *_favriateProducts;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *favriateProducts; // @synthesize favriateProducts=_favriateProducts;
@property(retain, nonatomic) NSMutableArray *DiscAlbums; // @synthesize DiscAlbums=_DiscAlbums;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) NSMutableArray *weekendAlbumAndProductList; // @synthesize weekendAlbumAndProductList=_weekendAlbumAndProductList;
@property(retain, nonatomic) NSMutableArray *travelAlbumAndProductList; // @synthesize travelAlbumAndProductList=_travelAlbumAndProductList;
@property(retain, nonatomic) NSMutableArray *hotelAlbumAndProductList; // @synthesize hotelAlbumAndProductList=_hotelAlbumAndProductList;
@property(retain, nonatomic) NSMutableArray *hotArticlesList; // @synthesize hotArticlesList=_hotArticlesList;
@property(retain, nonatomic) NSMutableArray *HotCityInfos; // @synthesize HotCityInfos=_HotCityInfos;
@property(retain, nonatomic) NSMutableArray *TravelCityInfos; // @synthesize TravelCityInfos=_TravelCityInfos;
@property(retain, nonatomic) CTDiscoverCityInfoModel *headerCityModel; // @synthesize headerCityModel=_headerCityModel;
@property(copy, nonatomic) NSString *Slogan; // @synthesize Slogan=_Slogan;
@property(copy, nonatomic) NSString *SequenceId; // @synthesize SequenceId=_SequenceId;
@property(nonatomic) int DistrictId; // @synthesize DistrictId=_DistrictId;
@property(nonatomic) int SaleCityID; // @synthesize SaleCityID=_SaleCityID;
@property(nonatomic) int CityStatus; // @synthesize CityStatus=_CityStatus;
@property(copy, nonatomic) NSString *ABType; // @synthesize ABType=_ABType;
@property(retain, nonatomic) CTDiscoverCityInfoModel *CityInfo; // @synthesize CityInfo=_CityInfo;
- (void).cxx_destruct;
- (void)clearData;
- (id)init;

@end

