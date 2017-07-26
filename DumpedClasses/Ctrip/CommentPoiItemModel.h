//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface CommentPoiItemModel : CTBusinessBean <NSCoding>
{
    int resourceType;
    int resourceId;
    int globalPoiId;
    NSString *name;
    NSString *enName;
    NSString *covImgUrl;
    NSString *recommandReason;
}

@property(copy, nonatomic) NSString *recommandReason; // @synthesize recommandReason;
@property(copy, nonatomic) NSString *covImgUrl; // @synthesize covImgUrl;
@property(copy, nonatomic) NSString *enName; // @synthesize enName;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int globalPoiId; // @synthesize globalPoiId;
@property(nonatomic) int resourceId; // @synthesize resourceId;
@property(nonatomic) int resourceType; // @synthesize resourceType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

