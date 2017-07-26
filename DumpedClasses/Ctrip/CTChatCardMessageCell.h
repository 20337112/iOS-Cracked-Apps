//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatMessageCell.h"

#import "CTChatMessageCellSubclassing.h"

@class CTChatCardView, NSString;

@interface CTChatCardMessageCell : CTChatMessageCell <CTChatMessageCellSubclassing>
{
    CTChatCardView *_messageCardView;
}

+ (long long)classMessageType;
+ (void)load;
@property(retain, nonatomic) CTChatCardView *messageCardView; // @synthesize messageCardView=_messageCardView;
- (void).cxx_destruct;
- (void)configureCellWithData:(id)arg1;
- (id)menuItems;
- (void)setup;
- (void)updateConstraints;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

