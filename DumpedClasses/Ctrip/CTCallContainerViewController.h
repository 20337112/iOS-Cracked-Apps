//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class NSString, UIViewController, UIWindow;

@interface CTCallContainerViewController : CTRootViewController
{
    NSString *mutexTokenString_;
    UIWindow *window_;
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)dismissViewController:(id)arg1 FromViewController:(id)arg2 Animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentViewController:(id)arg1 onViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

