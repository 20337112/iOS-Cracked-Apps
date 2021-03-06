//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "FavSearchLogicDelegate.h"

@class APSearchBarEx, APSearchDisplayController, FavSearchLogic, NSArray, NSString, UIView;

@interface FavViewController : DTViewController <FavSearchLogicDelegate>
{
    UIView *_segmentedControlBGView;
    long long _currentSelectedIndex;
    NSArray *_viewControllers;
    NSString *_type;
    NSString *_toUid;
    NSString *_userType;
    APSearchBarEx *_searchBar;
    APSearchDisplayController *_mySearchDisplayController;
    FavSearchLogic *_searchLogic;
    NSArray *_rightBarBtnItems;
}

@property(retain, nonatomic) NSArray *rightBarBtnItems; // @synthesize rightBarBtnItems=_rightBarBtnItems;
@property(retain, nonatomic) FavSearchLogic *searchLogic; // @synthesize searchLogic=_searchLogic;
@property(retain, nonatomic) APSearchDisplayController *mySearchDisplayController; // @synthesize mySearchDisplayController=_mySearchDisplayController;
@property(retain, nonatomic) APSearchBarEx *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) UIView *segmentedControlBGView; // @synthesize segmentedControlBGView=_segmentedControlBGView;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *topSectionView;
- (void)onSearch:(id)arg1;
- (id)createBarButtonItemWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)currentViewController;
- (void)searchLogic:(id)arg1 didSelectData:(id)arg2;
- (void)setupChildViewControllers;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithToUid:(id)arg1 userType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

