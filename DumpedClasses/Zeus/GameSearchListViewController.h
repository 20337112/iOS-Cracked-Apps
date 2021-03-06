//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GameListViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class GameListPlaceHoldView, GameSearchBar, NSMutableArray, NSString;

@interface GameSearchListViewController : GameListViewController <UITextFieldDelegate>
{
    CDUnknownBlockType _whenChanged;
    GameListPlaceHoldView *_emptyView;
    NSMutableArray *_cachelist;
    GameSearchBar *_searchBar;
}

@property(retain, nonatomic) GameSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableArray *cachelist; // @synthesize cachelist=_cachelist;
@property(retain, nonatomic) GameListPlaceHoldView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) CDUnknownBlockType whenChanged; // @synthesize whenChanged=_whenChanged;
- (void).cxx_destruct;
- (void)goToGameList;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchKey:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)reloadData:(_Bool)arg1;
- (void)dismiss;
- (void)viewDidLoad;
- (id)initWithArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

