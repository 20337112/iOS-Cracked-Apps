//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface DistrictSummaryInfoModel : CTBusinessBean <NSCoding>
{
    int districtId;
    NSString *name;
    NSString *imgUrl;
    NSString *distance;
}

@property(copy, nonatomic) NSString *distance; // @synthesize distance;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int districtId; // @synthesize districtId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

