//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTTourSearchResultBManager : NSObject
{
}

+ (void)insertPreferFiltersWithFtpre:(id)arg1 fthot:(id)arg2 with:(id)arg3 isNeedIsSelected:(_Bool)arg4;
+ (void)category_logCode:(id)arg1 withParams:(id)arg2 request:(id)arg3 responseForAllFilters:(id)arg4 response:(id)arg5 withPreferBtn:(id)arg6 saleCityId:(id)arg7;
+ (void)gotoDP:(id)arg1;
+ (void)removeWithOutResultsInView:(id)arg1;
+ (void)private_goToTourSearchResultViewControllerWithKwd:(id)arg1 poid:(id)arg2 type:(id)arg3 filter:(id)arg4 curTab:(id)arg5 issrch:(_Bool)arg6 searchtype:(id)arg7 saleCity:(id)arg8 scity:(id)arg9;
+ (void)gotoOtherCityPage:(id)arg1 searchtype:(id)arg2 tab:(id)arg3 saleCity:(id)arg4 scity:(id)arg5;
+ (void)showWithOutResultsInView:(id)arg1 withKeyWord:(id)arg2 withTab:(long long)arg3 withScity:(id)arg4 withSaleCity:(id)arg5 searchType:(id)arg6 withParams:(id)arg7 withResponse:(id)arg8 frame:(struct CGRect)arg9 reloadBlock:(CDUnknownBlockType)arg10;
+ (void)requestTicketHotelAccessWithParams:(id)arg1 finish:(CDUnknownBlockType)arg2 client:(id)arg3;
+ (void)requestSearchResultsWithParams:(id)arg1 finish:(CDUnknownBlockType)arg2 client:(id)arg3;
+ (void)requestAllFiltersWithParams:(id)arg1 withTab:(id)arg2 finish:(CDUnknownBlockType)arg3 client:(id)arg4;
+ (id)changeRequestFiltersWithItem:(id)arg1 type:(id)arg2 withRequest:(id)arg3 withResponse:(id)arg4;
+ (id)changeRequestReturnFilters:(id)arg1 withTab:(id)arg2;
+ (id)sortNameWithKey:(long long)arg1;
+ (id)defaultTabWithSearchType:(id)arg1;
+ (id)keyMapForName;
+ (id)keyMapForLog;
+ (void)insertSelectedFiltersWithArray:(id)arg1 withResponse:(id)arg2 withRequest:(id)arg3;

@end

