//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QRBookItemView2;

@interface QRJingXuanCard1SubView : UIView
{
    long long _bookType;
    QRBookItemView2 *_bookItem2_1;
    QRBookItemView2 *_bookItem2_2;
    QRBookItemView2 *_bookItem2_3;
    UIView *_line;
}

+ (double)getCardHWithData:(id)arg1 WithBookType:(long long)arg2;
+ (double)getCardHWith:(id)arg1;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) QRBookItemView2 *bookItem2_3; // @synthesize bookItem2_3=_bookItem2_3;
@property(retain, nonatomic) QRBookItemView2 *bookItem2_2; // @synthesize bookItem2_2=_bookItem2_2;
@property(retain, nonatomic) QRBookItemView2 *bookItem2_1; // @synthesize bookItem2_1=_bookItem2_1;
@property(nonatomic) long long bookType; // @synthesize bookType=_bookType;
- (void).cxx_destruct;
- (void)routerEventWithName:(id)arg1 data:(id)arg2;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 WithBookType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

