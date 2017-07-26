//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class CTFlightPolicyInfoViewModel, NSMutableArray;

@interface CTFlightDetailViewModel : CTViewModel
{
    NSMutableArray *_flightSegmentList;
    NSMutableArray *_defaultPolicyInfoList;
    NSMutableArray *_totalPolicyInfoList;
    NSMutableArray *_specialPolicyInfoList;
    CTFlightPolicyInfoViewModel *_selectedPolicyModel;
}

@property(retain, nonatomic) CTFlightPolicyInfoViewModel *selectedPolicyModel; // @synthesize selectedPolicyModel=_selectedPolicyModel;
@property(retain, nonatomic) NSMutableArray *specialPolicyInfoList; // @synthesize specialPolicyInfoList=_specialPolicyInfoList;
@property(retain, nonatomic) NSMutableArray *totalPolicyInfoList; // @synthesize totalPolicyInfoList=_totalPolicyInfoList;
@property(retain, nonatomic) NSMutableArray *defaultPolicyInfoList; // @synthesize defaultPolicyInfoList=_defaultPolicyInfoList;
@property(retain, nonatomic) NSMutableArray *flightSegmentList; // @synthesize flightSegmentList=_flightSegmentList;
- (void).cxx_destruct;
- (void)initData;
- (id)init;

@end

