//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightXProductSetingV2Request : CTBusinessBean
{
    int _sourceType;
    NSString *_xPrductRequestString;
    NSMutableArray *_extendInfoList;
}

@property(retain, nonatomic) NSMutableArray *extendInfoList; // @synthesize extendInfoList=_extendInfoList;
@property(copy, nonatomic) NSString *xPrductRequestString; // @synthesize xPrductRequestString=_xPrductRequestString;
@property(nonatomic) int sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

