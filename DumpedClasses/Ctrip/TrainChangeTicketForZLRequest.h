//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TrainChangeTicketForZLRequest : CTBusinessBean
{
    int serviceVersion;
    int oldOrderId;
    long long orderId;
    NSString *electronicNumber;
    NSString *orderDate;
    NSMutableArray *changeTicketInfoList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *changeTicketInfoList; // @synthesize changeTicketInfoList;
@property(copy, nonatomic) NSString *orderDate; // @synthesize orderDate;
@property(copy, nonatomic) NSString *electronicNumber; // @synthesize electronicNumber;
@property(nonatomic) long long orderId; // @synthesize orderId;
@property(nonatomic) int oldOrderId; // @synthesize oldOrderId;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

