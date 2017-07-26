//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString;

@interface CTTrainCommonMultiselectView : UIView
{
    id <CTTrainCommonMultiselectViewDelegate> _delegate;
    NSString *_title;
    NSMutableArray *_arrayValue;
    NSMutableArray *_selectedIndexs;
    NSMutableArray *_arrayOptionButton;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSMutableArray *arrayOptionButton; // @synthesize arrayOptionButton=_arrayOptionButton;
@property(retain, nonatomic) NSMutableArray *selectedIndexs; // @synthesize selectedIndexs=_selectedIndexs;
@property(retain, nonatomic) NSMutableArray *arrayValue; // @synthesize arrayValue=_arrayValue;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <CTTrainCommonMultiselectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)headView;
- (void)loadView;
- (void)dismissView;
- (void)onOptionButton:(id)arg1;
- (void)onConfirmButton:(id)arg1;
- (void)onCancelButton:(id)arg1;
- (void)onBackground:(id)arg1;
- (void)didMoveToSuperview;
- (id)initViewWithFrame:(struct CGRect)arg1;

@end

