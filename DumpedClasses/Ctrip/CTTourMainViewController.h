//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITabBarControllerDelegate.h"

@class CTNavigationController, CTTourHistoryViewController, CTTourHomeViewController, CTTourOrderViewController, NSArray, NSString;

@interface CTTourMainViewController : UITabBarController <UITabBarControllerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    _Bool _isReturnToHomePage;
    long long _selectedTabBarIndex;
    CTTourHomeViewController *_homeVC;
    CTTourHistoryViewController *_historyVC;
    CTTourOrderViewController *_orderVC;
    NSArray *_titles;
    NSString *_vc2UrlString;
    NSString *_vc3UrlString;
    NSString *_vc4UrlString;
}

@property(copy, nonatomic) NSString *vc4UrlString; // @synthesize vc4UrlString=_vc4UrlString;
@property(copy, nonatomic) NSString *vc3UrlString; // @synthesize vc3UrlString=_vc3UrlString;
@property(copy, nonatomic) NSString *vc2UrlString; // @synthesize vc2UrlString=_vc2UrlString;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak CTTourOrderViewController *orderVC; // @synthesize orderVC=_orderVC;
@property(nonatomic) __weak CTTourHistoryViewController *historyVC; // @synthesize historyVC=_historyVC;
@property(nonatomic) __weak CTTourHomeViewController *homeVC; // @synthesize homeVC=_homeVC;
@property(nonatomic) long long selectedTabBarIndex; // @synthesize selectedTabBarIndex=_selectedTabBarIndex;
@property(nonatomic) _Bool isReturnToHomePage; // @synthesize isReturnToHomePage=_isReturnToHomePage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)rootViewControllerWithIndex:(long long)arg1;
- (id)uid;
- (id)targetUrlWithUri:(id)arg1;
@property(readonly, nonatomic) CTNavigationController *ctripNavigationController;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

