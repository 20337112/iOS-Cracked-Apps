//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface KTVSystemMsgLbsInviteView : UIView
{
    NSArray *curLbsList;
    id <KTVSystemMsgLbsInviteDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVSystemMsgLbsInviteDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionInviteOther:(id)arg1;
- (void)tapHeadImg:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lbsList:(id)arg2 hostSex:(long long)arg3;

@end
