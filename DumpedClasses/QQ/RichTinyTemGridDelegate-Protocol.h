//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MCGridVideoItem, RichTinyTempGridView;

@protocol RichTinyTemGridDelegate <NSObject>
- (void)gridView:(RichTinyTempGridView *)arg1 didInsertItem:(MCGridVideoItem *)arg2;
- (void)gridView:(RichTinyTempGridView *)arg1 beginDraging:(_Bool)arg2;
- (void)gridView:(RichTinyTempGridView *)arg1 needShowShadow:(_Bool)arg2;
- (void)gridView:(RichTinyTempGridView *)arg1 didSelected:(MCGridVideoItem *)arg2 temState:(long long)arg3;
@end
