//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSArray, NSString, Train12306SeatModel, Train12306TrainModel;

@interface CTTrainBuPiaoListCacheBean : CTCacheBean
{
    NSString *_topStation;
    NSString *_bottomStation;
    Train12306TrainModel *_trainModel;
    Train12306SeatModel *_seatModel;
    NSArray *_arrayAllPlan;
    NSString *_tipsMessage;
}

@property(copy, nonatomic) NSString *tipsMessage; // @synthesize tipsMessage=_tipsMessage;
@property(retain, nonatomic) NSArray *arrayAllPlan; // @synthesize arrayAllPlan=_arrayAllPlan;
@property(retain, nonatomic) Train12306SeatModel *seatModel; // @synthesize seatModel=_seatModel;
@property(retain, nonatomic) Train12306TrainModel *trainModel; // @synthesize trainModel=_trainModel;
@property(copy, nonatomic) NSString *bottomStation; // @synthesize bottomStation=_bottomStation;
@property(copy, nonatomic) NSString *topStation; // @synthesize topStation=_topStation;
- (void).cxx_destruct;

@end

