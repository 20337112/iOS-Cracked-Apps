//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIScrollView;

@interface FALCMenuHrizontal : UIView
{
    NSMutableArray *mButtonArray;
    NSMutableArray *mItemInfoArray;
    UIScrollView *mScrollView;
    float mTotalWidth;
    id <FALCMenuHrizontalDelegate> _delegate;
}

@property(nonatomic) id <FALCMenuHrizontalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)menuButtonClicked:(id)arg1;
- (void)moveScrolViewWithIndex:(long long)arg1;
- (void)changeButtonStateAtIndex:(long long)arg1;
- (void)clickButtonAtIndex:(long long)arg1;
- (void)changeButtonsToNormalState;
- (void)createMenuItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ButtonItems:(id)arg2;

@end
