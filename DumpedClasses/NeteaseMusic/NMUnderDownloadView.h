//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMLogView.h"

@class NMDownloadControlPanel, UITableView;

@interface NMUnderDownloadView : NMLogView
{
    UITableView *_tableView;
    NMDownloadControlPanel *_controlPanel;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMDownloadControlPanel *controlPanel; // @synthesize controlPanel=_controlPanel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

