//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTLiveChatMsg;

@interface CTLiveChatMsgBaseCell : UITableViewCell
{
    double _cellHeight;
    CTLiveChatMsg *_msg;
}

@property(retain, nonatomic) CTLiveChatMsg *msg; // @synthesize msg=_msg;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
- (void).cxx_destruct;
- (void)setValueFromMsg:(id)arg1;
- (void)drawCell:(id)arg1;

@end

