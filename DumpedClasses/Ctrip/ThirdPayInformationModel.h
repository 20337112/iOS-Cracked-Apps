//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ThirdPayInformationModel : CTBusinessBean
{
    NSString *paymentWayID;
    NSString *brandId;
    NSString *brandType;
    NSString *channelId;
}

@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

