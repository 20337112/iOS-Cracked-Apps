//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCFloatLayerModel<Optional>;

@interface DCOperationInfoModel : TRBaseModel
{
    DCFloatLayerModel<Optional> *_float_layer;
    DCFloatLayerModel<Optional> *_float_ad;
}

@property(retain, nonatomic) DCFloatLayerModel<Optional> *float_ad; // @synthesize float_ad=_float_ad;
@property(retain, nonatomic) DCFloatLayerModel<Optional> *float_layer; // @synthesize float_layer=_float_layer;
- (void).cxx_destruct;

@end

