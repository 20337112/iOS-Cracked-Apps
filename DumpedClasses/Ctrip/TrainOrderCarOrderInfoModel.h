//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainOrderCarOrderInfoModel : CTBusinessBean
{
    int patternType;
    NSString *carContent;
    NSString *priceMark;
}

@property(copy, nonatomic) NSString *priceMark; // @synthesize priceMark;
@property(copy, nonatomic) NSString *carContent; // @synthesize carContent;
@property(nonatomic) int patternType; // @synthesize patternType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

