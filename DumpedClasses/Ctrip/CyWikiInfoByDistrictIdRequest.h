//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface CyWikiInfoByDistrictIdRequest : CTBusinessBean <NSCoding>
{
    NSMutableArray *districtIdsList;
}

@property(retain, nonatomic) NSMutableArray *districtIdsList; // @synthesize districtIdsList;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

