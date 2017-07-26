//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TableViewCellLongPressedDelegate.h"

@class CTFileEntry, NSString, UILongPressGestureRecognizer;

@interface LongPressGuestureTableViewCell : UITableViewCell <TableViewCellLongPressedDelegate>
{
    UILongPressGestureRecognizer *_longPressGesture;
    id <TableViewCellLongPressedDelegate> _longPressedDelegate;
    CTFileEntry *_fileEntity;
}

@property(retain, nonatomic) CTFileEntry *fileEntity; // @synthesize fileEntity=_fileEntity;
@property(nonatomic) id <TableViewCellLongPressedDelegate> longPressedDelegate; // @synthesize longPressedDelegate=_longPressedDelegate;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
- (void).cxx_destruct;
- (void)setupData:(id)arg1;
- (void)longPressedAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

