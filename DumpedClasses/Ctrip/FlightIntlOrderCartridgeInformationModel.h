//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface FlightIntlOrderCartridgeInformationModel : CTBusinessBean
{
    int cartridgeType;
    int cartridgeSwitch;
    NSMutableArray *contentlistList;
}

@property(retain, nonatomic) NSMutableArray *contentlistList; // @synthesize contentlistList;
@property(nonatomic) int cartridgeSwitch; // @synthesize cartridgeSwitch;
@property(nonatomic) int cartridgeType; // @synthesize cartridgeType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

