//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightBasicInvoiceInformationModel : CTBusinessBean
{
    NSString *title;
    NSString *body;
    NSString *taxNo;
    int invoiceTitleType;
    long long invoiceId;
    int categoryType;
}

@property(nonatomic) int categoryType; // @synthesize categoryType;
@property(nonatomic) long long invoiceId; // @synthesize invoiceId;
@property(nonatomic) int invoiceTitleType; // @synthesize invoiceTitleType;
@property(copy, nonatomic) NSString *taxNo; // @synthesize taxNo;
@property(copy, nonatomic) NSString *body; // @synthesize body;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

