//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface OtherPushMessageClearV2Response : CTBusinessBean
{
    int _result;
    int _unreadMessageCounter;
    NSMutableArray *_businessPushMessageList;
}

@property(retain, nonatomic) NSMutableArray *businessPushMessageList; // @synthesize businessPushMessageList=_businessPushMessageList;
@property(nonatomic) int unreadMessageCounter; // @synthesize unreadMessageCounter=_unreadMessageCounter;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

