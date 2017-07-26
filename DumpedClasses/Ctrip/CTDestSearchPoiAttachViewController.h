//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CTNoDataView, CTTableView, NSArray, NSString, UIActivityIndicatorView, UIImageView, UITextField, UIView;

@interface CTDestSearchPoiAttachViewController : CTRootViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, CTTableViewDelegate>
{
    _Bool _isNearBySearch;
    _Bool _isRecommendResult;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancel;
    NSString *_placeHolder;
    NSString *_navTile;
    NSString *_picLat;
    NSString *_picLon;
    UIView *_searchBarView;
    UITextField *_searchTextField;
    UIView *_searchHeaderView;
    CTTableView *_suggestionTableView;
    UIView *_bgView;
    NSString *_senderToken;
    NSString *_searchWord;
    UIActivityIndicatorView *_activityView;
    NSArray *_dataSource;
    UIImageView *_searchImageView;
    CTNoDataView *_nodataView;
}

+ (id)initWithPicLat:(id)arg1 picLon:(id)arg2 completion:(CDUnknownBlockType)arg3 cancel:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) CTNoDataView *nodataView; // @synthesize nodataView=_nodataView;
@property(nonatomic) _Bool isRecommendResult; // @synthesize isRecommendResult=_isRecommendResult;
@property(nonatomic) _Bool isNearBySearch; // @synthesize isNearBySearch=_isNearBySearch;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(copy, nonatomic) NSString *searchWord; // @synthesize searchWord=_searchWord;
@property(copy, nonatomic) NSString *senderToken; // @synthesize senderToken=_senderToken;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) CTTableView *suggestionTableView; // @synthesize suggestionTableView=_suggestionTableView;
@property(retain, nonatomic) UIView *searchHeaderView; // @synthesize searchHeaderView=_searchHeaderView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIView *searchBarView; // @synthesize searchBarView=_searchBarView;
@property(copy, nonatomic) NSString *picLon; // @synthesize picLon=_picLon;
@property(copy, nonatomic) NSString *picLat; // @synthesize picLat=_picLat;
@property(copy, nonatomic) NSString *navTile; // @synthesize navTile=_navTile;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (_Bool)isNeedDefaultRequest;
- (id)acitvityView;
- (id)longitude;
- (id)latitude;
- (void)refreshTableView:(id)arg1;
- (void)stopActivity;
- (void)startActivity;
- (void)cancelSearch;
- (void)request:(id)arg1;
- (void)defaultRequestIfNeeded;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)editTextField:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)quitVC;
- (void)goBack;
- (void)configNavBar;
- (void)setUpView;
- (id)CT_PageId;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

