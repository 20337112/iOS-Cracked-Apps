//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSMutableArray;

@interface CTTrainDaiGouPassengerSelectionCacheBean : CTCacheBean
{
    NSMutableArray *_arrayAllPassengers;
    NSMutableArray *_currentSelectedPassengers;
}

@property(retain, nonatomic) NSMutableArray *currentSelectedPassengers; // @synthesize currentSelectedPassengers=_currentSelectedPassengers;
@property(retain, nonatomic, setter=setArrayAllPassengers:) NSMutableArray *arrayAllPassengers; // @synthesize arrayAllPassengers=_arrayAllPassengers;
- (void).cxx_destruct;
- (void)sort;
- (void)sortAllPassengers;

@end

