//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (FMLongTapMenu)
- (id)longPressGestureRecignizer;
- (void)setLongPressGestureRecignizer:(id)arg1;
- (id)actionArray;
- (void)setActionArray:(id)arg1;
- (id)menuArray;
- (void)setMenuArray:(id)arg1;
- (int)options;
- (void)setOptions:(int)arg1;
- (_Bool)isEnableLongTap;
- (void)setEnableLongTap:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)getCopyText;
- (void)copy:(id)arg1;
- (void)hideWords:(id)arg1;
- (void)toWords:(id)arg1;
- (void)warn:(id)arg1;
- (void)clearMenu;
- (void)clearAllMenu;
- (void)menuDidHide;
- (void)showMenu;
- (void)addMenu:(id)arg1 withIndex:(int)arg2 AndAction:(CDUnknownBlockType)arg3;
- (void)initfmMenuSels;
- (void)enableLongTap;
- (void)enableLongTapCopy;
@end
