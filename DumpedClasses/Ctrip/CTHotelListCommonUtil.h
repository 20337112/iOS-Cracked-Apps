//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTHotelListCommonUtil : NSObject
{
}

+ (void)showSortInView:(id)arg1 forListCacheBean:(id)arg2 delegate:(id)arg3;
+ (void)getfilterlistService:(id)arg1 listCachebean:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (id)getTraceLogSortType:(int)arg1;
+ (void)listServiceTrace:(id)arg1 WithTypes:(id)arg2;
+ (void)listServiceTrace:(id)arg1 forVC:(id)arg2;
+ (void)listFilterLogTrace:(id)arg1 forVC:(id)arg2;
+ (void)logtraceWithlistBasic:(id)arg1 forVC:(id)arg2;
+ (void)logtraceSearchResultShow:(id)arg1 forVC:(id)arg2;
+ (id)getInitDistanceSimpleModel;
+ (void)setFilterDataForLandmarkWithLocationModel:(id)arg1 needResetDistance:(_Bool)arg2 mHotelListCacheBean:(id)arg3;

@end

