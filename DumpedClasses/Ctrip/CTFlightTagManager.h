//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightTagPubManager.h"

@interface CTFlightTagManager : CTFlightTagPubManager
{
}

+ (id)tagStringWithAreaIndex:(int)arg1 tagAreaDetailInforList:(id)arg2 userInfo:(id)arg3;
+ (struct CGSize)tagSizeWithAreaIndex:(int)arg1 tagAreaDetailInforList:(id)arg2 userInfo:(id)arg3;
+ (id)getTagDetailModelWithtagIndex:(int)arg1;
+ (struct CGSize)tagSizeWithAreaIndex:(int)arg1 tagIndexList:(id)arg2 userInfo:(id)arg3;
+ (id)tagSpecialTypesWithList:(id)arg1;
+ (void)factoryTagViewWithAreaIndex:(int)arg1 tagAreaDetailInforList:(id)arg2 containerView:(id)arg3 userInfo:(id)arg4;
+ (void)factoryTagViewWithAreaIndex:(int)arg1 tagIndexList:(id)arg2 containerView:(id)arg3 userInfo:(id)arg4;
+ (void)feedNewCandy:(id)arg1;
+ (struct CGSize)sizeWithTag:(int)arg1 text:(id)arg2;
+ (id)factoryTagViewWithType:(int)arg1 replaceView:(id)arg2 text:(id)arg3;
+ (id)factoryTagViewWithType:(int)arg1 replaceView:(id)arg2;
+ (id)factoryTagViewWithType:(id)arg1 tagType:(int)arg2 text:(id)arg3;
+ (id)factoryTagViewWithType:(int)arg1 containerView:(id)arg2 text:(id)arg3;
+ (id)factoryTagViewWithType:(int)arg1 containerView:(id)arg2;
+ (void)feedCandy:(id)arg1;
+ (id)shared;
- (id)getRealTagDetailModelWithtagIndex:(int)arg1;
- (id)specialTypesWithList:(id)arg1;
- (struct CGSize)getViewSize:(int)arg1 text:(id)arg2;
- (id)makeTagView:(id)arg1 viewModel:(id)arg2;
- (id)getViewWithType:(id)arg1 tagType:(int)arg2 text:(id)arg3;

@end

