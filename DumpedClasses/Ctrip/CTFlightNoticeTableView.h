//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface CTFlightNoticeTableView : UIView
{
    double _tableViewHeight;
}

@property(nonatomic) double tableViewHeight; // @synthesize tableViewHeight=_tableViewHeight;
- (id)getLine:(struct CGRect)arg1 color:(id)arg2;
- (id)getUILabelWithContentStr:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 textColor:(id)arg4 backGroundColor:(id)arg5;
- (void)setClockInfoViewModel:(id)arg1 clockFileName:(id)arg2 title:(id)arg3 content:(id)arg4 clock2Title:(double)arg5 title2Info:(double)arg6 clock2Info:(double)arg7 maxWidth:(double)arg8 textColor:(id)arg9 backGroundColor:(id)arg10 textFont:(id)arg11;
- (void)setupNoticeTableWith:(id)arg1;

@end

