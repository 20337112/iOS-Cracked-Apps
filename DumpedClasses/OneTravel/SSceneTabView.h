//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, UIImageView;

@interface SSceneTabView : UIView
{
    _Bool _isManuallySelect;
    _Bool _spreaded;
    id <SSceneTabViewDelegate> _delegate;
    NSArray *_tabArray;
    long long _selectedIndex;
    NSString *_allSceneIds;
    UIImageView *_backgroundView;
    UIView *_selectView;
    UIView *_tabContentView;
    long long _countToShow;
    long long _recordSelectedIndex;
    double _recordWidth;
}

@property(nonatomic) double recordWidth; // @synthesize recordWidth=_recordWidth;
@property(nonatomic) long long recordSelectedIndex; // @synthesize recordSelectedIndex=_recordSelectedIndex;
@property(nonatomic) _Bool spreaded; // @synthesize spreaded=_spreaded;
@property(nonatomic) long long countToShow; // @synthesize countToShow=_countToShow;
@property(retain, nonatomic) UIView *tabContentView; // @synthesize tabContentView=_tabContentView;
@property(retain, nonatomic) UIView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isManuallySelect; // @synthesize isManuallySelect=_isManuallySelect;
@property(retain, nonatomic) NSString *allSceneIds; // @synthesize allSceneIds=_allSceneIds;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *tabArray; // @synthesize tabArray=_tabArray;
@property(nonatomic) __weak id <SSceneTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)showAllTabButton;
- (id)tabWithTitle:(id)arg1 index:(long long)arg2;
- (long long)countToShowWithArray:(id)arg1;
- (void)setSpreadState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)selectTabAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2 needCallBack:(_Bool)arg3;
- (void)reloadWithTabArray:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

