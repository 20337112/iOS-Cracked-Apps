//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface CustomerInvoiceSearchResponse : CTBusinessBean
{
    int recordCount;
    NSMutableArray *invoiceList;
}

@property(retain, nonatomic) NSMutableArray *invoiceList; // @synthesize invoiceList;
@property(nonatomic) int recordCount; // @synthesize recordCount;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

