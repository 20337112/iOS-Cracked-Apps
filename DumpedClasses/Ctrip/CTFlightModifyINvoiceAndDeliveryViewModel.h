//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class FlightModifyDeliveryInformationModel, NSMutableArray;

@interface CTFlightModifyINvoiceAndDeliveryViewModel : CTViewModel
{
    int _opertateOption;
    NSMutableArray *_invoiceList;
    FlightModifyDeliveryInformationModel *_deliveryInformationModel;
}

@property(retain, nonatomic) FlightModifyDeliveryInformationModel *deliveryInformationModel; // @synthesize deliveryInformationModel=_deliveryInformationModel;
@property(retain, nonatomic) NSMutableArray *invoiceList; // @synthesize invoiceList=_invoiceList;
@property(nonatomic) int opertateOption; // @synthesize opertateOption=_opertateOption;
- (void).cxx_destruct;
- (id)init;

@end

