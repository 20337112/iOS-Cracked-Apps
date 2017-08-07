//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface DDIMDropListView : UITableView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isShow;
    NSArray *_selections;
    CDUnknownBlockType _selectBlock;
    struct CGRect _showRect;
    struct CGRect _dismissRect;
}

@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) NSArray *selections; // @synthesize selections=_selections;
@property(nonatomic) struct CGRect dismissRect; // @synthesize dismissRect=_dismissRect;
@property(nonatomic) struct CGRect showRect; // @synthesize showRect=_showRect;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isShown;
- (void)dismissWithButton:(id)arg1;
- (void)showWithButton:(id)arg1;
- (void)setupTableImageView;
- (id)initWithFrame:(struct CGRect)arg1 selections:(id)arg2 selectBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
