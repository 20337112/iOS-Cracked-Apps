//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface SourceInormationModel : CTBusinessBean
{
    NSString *allianceId;
    NSString *sid;
    int userSourceType;
    int searchBitMap;
}

@property(nonatomic) int searchBitMap; // @synthesize searchBitMap;
@property(nonatomic) int userSourceType; // @synthesize userSourceType;
@property(copy, nonatomic) NSString *sid; // @synthesize sid;
@property(copy, nonatomic) NSString *allianceId; // @synthesize allianceId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

