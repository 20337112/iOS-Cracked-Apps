//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainNoticeInfoModel : CTBusinessBean
{
    NSString *noticeTitle;
    NSString *noticeSubTitle;
    NSString *noticeType;
    NSString *noticeContent;
}

@property(copy, nonatomic) NSString *noticeContent; // @synthesize noticeContent;
@property(copy, nonatomic) NSString *noticeType; // @synthesize noticeType;
@property(copy, nonatomic) NSString *noticeSubTitle; // @synthesize noticeSubTitle;
@property(copy, nonatomic) NSString *noticeTitle; // @synthesize noticeTitle;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

