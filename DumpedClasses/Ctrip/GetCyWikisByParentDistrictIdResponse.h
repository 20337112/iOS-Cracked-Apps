//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface GetCyWikisByParentDistrictIdResponse : CTBusinessBean <NSCoding>
{
    NSMutableArray *cyWikiDatasList;
}

@property(retain, nonatomic) NSMutableArray *cyWikiDatasList; // @synthesize cyWikiDatasList;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

