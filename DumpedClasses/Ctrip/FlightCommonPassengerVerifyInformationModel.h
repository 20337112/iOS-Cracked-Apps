//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightCommonPassengerVerifyInformationModel : CTBusinessBean
{
    int verifyType;
    NSString *message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) int verifyType; // @synthesize verifyType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

