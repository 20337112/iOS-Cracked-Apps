//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTLauncherWidgetGroupBase.h"

@class O2OIndexViewController;

@interface O2OWidgetGroup : DTLauncherWidgetGroupBase
{
    O2OIndexViewController *_indexViewController;
}

@property(retain, nonatomic) O2OIndexViewController *indexViewController; // @synthesize indexViewController=_indexViewController;
- (void).cxx_destruct;
- (_Bool)dateLatterThanNow:(id)arg1;
- (void)resetTabIfNeeded;
- (void)update1212TabStyle;
- (void)dealloc;
- (id)contentViewController;
- (void)widgetDidStartWithOptions:(id)arg1 fromLaunch:(_Bool)arg2;

@end

