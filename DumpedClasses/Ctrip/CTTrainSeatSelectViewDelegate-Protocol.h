//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTrainSeatSelectView, NSArray;

@protocol CTTrainSeatSelectViewDelegate <NSObject>
- (void)seatSelectView:(CTTrainSeatSelectView *)arg1 didSelectSeats:(NSArray *)arg2 isAcceptOnSeat:(_Bool)arg3;

@optional
- (void)seatSelectViewDidCancel:(CTTrainSeatSelectView *)arg1;
@end

