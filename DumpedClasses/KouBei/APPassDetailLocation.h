//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPassDetailBaseData.h"

@class NSString;

@interface APPassDetailLocation : APPassDetailBaseData
{
    NSString *_cellActionInfoLatitude;
    NSString *_cellActionInfoLongitude;
    NSString *_cellActionInfoShopName;
    NSString *_cellActionInfoAddr;
    NSString *_cellActionInfoTelNum;
    NSString *_cellActionInfoDistance;
    NSString *_taxiSchemaUrl;
}

@property(copy, nonatomic) NSString *taxiSchemaUrl; // @synthesize taxiSchemaUrl=_taxiSchemaUrl;
@property(copy, nonatomic) NSString *cellActionInfoDistance; // @synthesize cellActionInfoDistance=_cellActionInfoDistance;
@property(copy, nonatomic) NSString *cellActionInfoTelNum; // @synthesize cellActionInfoTelNum=_cellActionInfoTelNum;
@property(copy, nonatomic) NSString *cellActionInfoAddr; // @synthesize cellActionInfoAddr=_cellActionInfoAddr;
@property(copy, nonatomic) NSString *cellActionInfoShopName; // @synthesize cellActionInfoShopName=_cellActionInfoShopName;
@property(copy, nonatomic) NSString *cellActionInfoLongitude; // @synthesize cellActionInfoLongitude=_cellActionInfoLongitude;
@property(copy, nonatomic) NSString *cellActionInfoLatitude; // @synthesize cellActionInfoLatitude=_cellActionInfoLatitude;
- (void).cxx_destruct;
- (id)init;

@end

