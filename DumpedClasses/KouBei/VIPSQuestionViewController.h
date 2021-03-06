//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableIndexSet, NSString, NSTimer, UITableView, VIPSGridFooterView, VIPSGridHeaderView, VIPSQuestion, VIPSRootViewController;

@interface VIPSQuestionViewController : VIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hasOthers;
    VIPSRootViewController *_vipsRootController;
    VIPSQuestion *_question;
    unsigned long long _questionType;
    UITableView *_gridView;
    NSMutableIndexSet *_selectIndexSet;
    VIPSGridHeaderView *_gridHeaderView;
    VIPSGridFooterView *_gridFooterView;
    long long _timeoutCount;
    NSTimer *_timeoutTimer;
    NSMutableArray *_optionImages;
}

@property(retain, nonatomic) NSMutableArray *optionImages; // @synthesize optionImages=_optionImages;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) long long timeoutCount; // @synthesize timeoutCount=_timeoutCount;
@property(retain, nonatomic) VIPSGridFooterView *gridFooterView; // @synthesize gridFooterView=_gridFooterView;
@property(retain, nonatomic) VIPSGridHeaderView *gridHeaderView; // @synthesize gridHeaderView=_gridHeaderView;
@property(retain, nonatomic) NSMutableIndexSet *selectIndexSet; // @synthesize selectIndexSet=_selectIndexSet;
@property(retain, nonatomic) UITableView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) unsigned long long questionType; // @synthesize questionType=_questionType;
@property(nonatomic) _Bool hasOthers; // @synthesize hasOthers=_hasOthers;
@property(retain, nonatomic) VIPSQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak VIPSRootViewController *vipsRootController; // @synthesize vipsRootController=_vipsRootController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTapHandlerForCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)imageDownloadSuccessHandler:(id)arg1;
- (void)timeoutHandler;
- (_Bool)hasAllImagesDownloadSucceed;
- (void)addNotification;
- (void)stopTimer;
- (void)startTimer;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

