//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTContactListWidget_train, NSArray;

@protocol CTContactListWidget_trainDelegate <NSObject>

@optional
- (void)contactListWidget:(CTContactListWidget_train *)arg1 deleteNode:(id)arg2;
- (void)contactListWidget:(CTContactListWidget_train *)arg1 changedNode:(id)arg2;
- (_Bool)contactListWidget:(CTContactListWidget_train *)arg1 checkNode:(id)arg2 alert:(_Bool)arg3;
- (_Bool)contactListWidget:(CTContactListWidget_train *)arg1 addCheckNode:(id)arg2 alert:(_Bool)arg3;
- (_Bool)contactListWidget:(CTContactListWidget_train *)arg1 editCheckNode:(id)arg2 alert:(_Bool)arg3;
- (void)contactListWidget:(CTContactListWidget_train *)arg1 didSelect:(NSArray *)arg2;
- (void)contactListWidgetCanceled:(CTContactListWidget_train *)arg1;
@end

