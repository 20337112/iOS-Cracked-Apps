//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainTicketVendorTypeV3Model : CTBusinessBean
{
    int vendorID;
    NSString *vendorName;
    NSString *vendorType;
    NSString *vendorRemark;
    int vendorIcon;
}

@property(nonatomic) int vendorIcon; // @synthesize vendorIcon;
@property(copy, nonatomic) NSString *vendorRemark; // @synthesize vendorRemark;
@property(copy, nonatomic) NSString *vendorType; // @synthesize vendorType;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName;
@property(nonatomic) int vendorID; // @synthesize vendorID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

