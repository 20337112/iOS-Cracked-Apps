//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelRewardSummary : CTBusinessBean
{
    int _type;
    NSString *_summary;
}

@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

