//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableAttributedString;

@interface CTIntFlightDeliveryTypeCoverViewCellModel : NSObject
{
    _Bool _isSelected;
    _Bool _isToShowHintIcon;
    NSMutableAttributedString *_titleLabelText;
    long long _deliveryType;
    long long _expressType;
}

@property(nonatomic) long long expressType; // @synthesize expressType=_expressType;
@property(nonatomic) long long deliveryType; // @synthesize deliveryType=_deliveryType;
@property(nonatomic) _Bool isToShowHintIcon; // @synthesize isToShowHintIcon=_isToShowHintIcon;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSMutableAttributedString *titleLabelText; // @synthesize titleLabelText=_titleLabelText;
- (void).cxx_destruct;
- (id)init;

@end

