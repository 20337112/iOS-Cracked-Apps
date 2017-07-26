//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelModel : CTBusinessBean
{
    int hotelID;
    NSString *hotelName;
    NSString *hotelShortName;
    NSString *hotelURL;
    NSString *hotelAddress;
    NSString *zoneName;
    NSString *locationName;
    NSString *lowestPrice;
    NSString *currency;
    int hotelPriceType;
    int star;
    NSMutableArray *coordinateItemList;
    NSString *distance;
    NSString *customerPoint;
    int roomNumber;
    NSString *openYear;
    int flag;
    NSString *fitmentYear;
    NSString *promoteInfo;
    NSMutableArray *roomList;
    NSMutableArray *ticketGiftList;
    int cashBackType;
    NSString *cashBack;
    int couponBackType;
    NSString *couponBackAmount;
    NSString *specialPriceRemark;
}

@property(copy, nonatomic) NSString *specialPriceRemark; // @synthesize specialPriceRemark;
@property(copy, nonatomic) NSString *couponBackAmount; // @synthesize couponBackAmount;
@property(nonatomic) int couponBackType; // @synthesize couponBackType;
@property(copy, nonatomic) NSString *cashBack; // @synthesize cashBack;
@property(nonatomic) int cashBackType; // @synthesize cashBackType;
@property(retain, nonatomic) NSMutableArray *ticketGiftList; // @synthesize ticketGiftList;
@property(retain, nonatomic) NSMutableArray *roomList; // @synthesize roomList;
@property(copy, nonatomic) NSString *promoteInfo; // @synthesize promoteInfo;
@property(copy, nonatomic) NSString *fitmentYear; // @synthesize fitmentYear;
@property(nonatomic) int flag; // @synthesize flag;
@property(copy, nonatomic) NSString *openYear; // @synthesize openYear;
@property(nonatomic) int roomNumber; // @synthesize roomNumber;
@property(copy, nonatomic) NSString *customerPoint; // @synthesize customerPoint;
@property(copy, nonatomic) NSString *distance; // @synthesize distance;
@property(retain, nonatomic) NSMutableArray *coordinateItemList; // @synthesize coordinateItemList;
@property(nonatomic) int star; // @synthesize star;
@property(nonatomic) int hotelPriceType; // @synthesize hotelPriceType;
@property(copy, nonatomic) NSString *currency; // @synthesize currency;
@property(copy, nonatomic) NSString *lowestPrice; // @synthesize lowestPrice;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName;
@property(copy, nonatomic) NSString *zoneName; // @synthesize zoneName;
@property(copy, nonatomic) NSString *hotelAddress; // @synthesize hotelAddress;
@property(copy, nonatomic) NSString *hotelURL; // @synthesize hotelURL;
@property(copy, nonatomic) NSString *hotelShortName; // @synthesize hotelShortName;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName;
@property(nonatomic) int hotelID; // @synthesize hotelID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

