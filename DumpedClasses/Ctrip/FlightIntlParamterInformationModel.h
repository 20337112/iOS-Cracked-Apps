//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightIntlParamterInformationModel : CTBusinessBean
{
    int paramterType;
    NSString *paramterValue;
}

@property(copy, nonatomic) NSString *paramterValue; // @synthesize paramterValue;
@property(nonatomic) int paramterType; // @synthesize paramterType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

