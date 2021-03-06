//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSString, TBTakeoutBuyDeliveryModel, UIPickerView;

@interface TBTakeoutBuyOptionsView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    TBTakeoutBuyDeliveryModel *_deliveryModel;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) TBTakeoutBuyDeliveryModel *deliveryModel; // @synthesize deliveryModel=_deliveryModel;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
- (void).cxx_destruct;
- (void)buttonClicke;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)showDelivery:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

