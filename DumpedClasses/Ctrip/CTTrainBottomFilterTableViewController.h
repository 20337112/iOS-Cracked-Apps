//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class UIView;

@interface CTTrainBottomFilterTableViewController : CTRootViewController
{
    UIView *_bottomContainerView;
    double bottomContainerViewHeight;
    double baseTableViewHeight;
    _Bool isAddBottomHeight;
    struct CGPoint startScrollPoint;
    _Bool _isRefreshedBottomView;
}

@property(nonatomic) double baseTableViewHeight; // @synthesize baseTableViewHeight;
@property(nonatomic) double bottomContainerViewHeight; // @synthesize bottomContainerViewHeight;
@property(retain, nonatomic) UIView *bottomContainerView; // @synthesize bottomContainerView=_bottomContainerView;
- (void).cxx_destruct;
- (void)hideBottomBar:(id)arg1;
- (void)showBottomBarWithBlurEffect:(id)arg1;
- (void)showBottomBarWhenScrollToBottom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showBaseTableViewWhenShowBottomContainerView;
- (void)showBaseTableViewWhenHideBottomContainerView;
- (struct CGRect)bottomContainerViewHideRect;
- (struct CGRect)bottomContainerViewShowRect;
- (void)refreshBottomContainerViewWithView:(id)arg1;
- (void)adjustTableViewFrameForIOS7;
- (id)baseTableView;
@property(readonly, nonatomic) _Bool isRefreshedBottomView; // @synthesize isRefreshedBottomView=_isRefreshedBottomView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

