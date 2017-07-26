//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPSearchBaseViewController.h"

@class DTRpcAsyncCaller, NSString, PPFootView;

@interface PPEnterSubOfficialViewController : PPSearchBaseViewController
{
    _Bool _isRequestNextPage;
    _Bool _needRequest;
    PPFootView *_footerMessageView;
    NSString *_secondOfficialType;
    DTRpcAsyncCaller *_addSearchRPC;
}

@property(nonatomic) __weak DTRpcAsyncCaller *addSearchRPC; // @synthesize addSearchRPC=_addSearchRPC;
@property(retain, nonatomic) NSString *secondOfficialType; // @synthesize secondOfficialType=_secondOfficialType;
- (void).cxx_destruct;
- (id)secondOfficialTypeName;
- (void)receiveAddSucessMsg:(id)arg1;
- (void)requestSubOfficialTypes;
- (void)requestNextPage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addButtonClickedInCell:(id)arg1 withDicInfo:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillDestroy;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 placeHolder:(id)arg2 officialType:(id)arg3 secondOfficialType:(id)arg4 isNotShowSearchBar:(_Bool)arg5;

@end
