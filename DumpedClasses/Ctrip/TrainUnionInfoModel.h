//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainUnionInfoModel : CTBusinessBean
{
    int allianceID;
    int sID;
    NSString *oUID;
}

@property(copy, nonatomic) NSString *oUID; // @synthesize oUID;
@property(nonatomic) int sID; // @synthesize sID;
@property(nonatomic) int allianceID; // @synthesize allianceID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

