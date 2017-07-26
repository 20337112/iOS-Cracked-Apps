//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet;

@interface CTFlightCalDataMgr : NSObject
{
    int _row;
    int _col;
    NSArray *_topTitles;
    NSArray *_leftTitles;
    NSArray *_priceDatas;
    NSMutableSet *_sundayCols;
    NSMutableSet *_sundayRows;
}

+ (id)daysWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 isStruct:(_Bool)arg4 config:(id)arg5 sundaySets:(id)arg6;
+ (id)strDaysWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 config:(id)arg4;
+ (id)daysWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3 config:(id)arg4 sundaySets:(id)arg5;
@property(retain, nonatomic) NSMutableSet *sundayRows; // @synthesize sundayRows=_sundayRows;
@property(retain, nonatomic) NSMutableSet *sundayCols; // @synthesize sundayCols=_sundayCols;
@property(nonatomic) int col; // @synthesize col=_col;
@property(nonatomic) int row; // @synthesize row=_row;
@property(retain, nonatomic) NSArray *priceDatas; // @synthesize priceDatas=_priceDatas;
@property(retain, nonatomic) NSArray *leftTitles; // @synthesize leftTitles=_leftTitles;
@property(retain, nonatomic) NSArray *topTitles; // @synthesize topTitles=_topTitles;
- (void).cxx_destruct;
- (id)pathWithDepartDate:(id)arg1 returnDate:(id)arg2;
- (id)pathWithSystemDepartDate:(id)arg1 returnDate:(id)arg2;
- (id)priceRows:(long long)arg1;
- (id)priceUnit:(long long)arg1 row:(long long)arg2;
- (void)setSelStatusWithPath:(int)arg1 col:(int)arg2 isInland:(_Bool)arg3;
- (void)setSelStatusWithPath:(int)arg1 col:(int)arg2 isSelectd:(_Bool)arg3 isInland:(_Bool)arg4;
- (_Bool)isValid:(id)arg1 arriveDay:(id)arg2;
- (void)reloadWithStartDate:(id)arg1 departEndDate:(id)arg2 arriveStartDate:(id)arg3 arriveEndDate:(id)arg4 currentDate:(id)arg5 priceDicts:(id)arg6 lowestPrices:(id)arg7 config:(id)arg8;

@end

