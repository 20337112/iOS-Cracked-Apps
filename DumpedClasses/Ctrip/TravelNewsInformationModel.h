//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TravelNewsInformationModel : CTBusinessBean
{
    long long _newsId;
    NSString *_title;
    NSString *_viewCount;
    NSString *_image;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *viewCount; // @synthesize viewCount=_viewCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long newsId; // @synthesize newsId=_newsId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

