//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface WikiLinkDataModel : CTBusinessBean <NSCoding>
{
    int linkType;
    NSString *title;
    NSString *linkUrl;
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int linkType; // @synthesize linkType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

