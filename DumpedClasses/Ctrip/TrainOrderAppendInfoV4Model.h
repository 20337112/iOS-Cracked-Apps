//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface TrainOrderAppendInfoV4Model : CTBusinessBean
{
    int appendID;
    int appendCount;
    NSString *appendContent;
}

@property(copy, nonatomic) NSString *appendContent; // @synthesize appendContent;
@property(nonatomic) int appendCount; // @synthesize appendCount;
@property(nonatomic) int appendID; // @synthesize appendID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

