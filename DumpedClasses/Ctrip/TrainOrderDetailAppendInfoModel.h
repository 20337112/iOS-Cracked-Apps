//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainOrderDetailAppendInfoModel : CTBusinessBean
{
    NSString *appendProductTitle;
    NSString *appendProductDesc;
    NSString *appendProductUrl;
}

@property(copy, nonatomic) NSString *appendProductUrl; // @synthesize appendProductUrl;
@property(copy, nonatomic) NSString *appendProductDesc; // @synthesize appendProductDesc;
@property(copy, nonatomic) NSString *appendProductTitle; // @synthesize appendProductTitle;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

