//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightSubmitFFPInformationModel : CTBusinessBean
{
    NSString *airlineCode;
    NSString *fFPNo;
}

@property(copy, nonatomic) NSString *fFPNo; // @synthesize fFPNo;
@property(copy, nonatomic) NSString *airlineCode; // @synthesize airlineCode;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

