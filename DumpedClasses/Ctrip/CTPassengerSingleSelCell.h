//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTPassengerNode, UIButton, UILabel;

@interface CTPassengerSingleSelCell : CTCustomeGroupTableViewCell
{
    CTPassengerNode *_pNode;
    id <CTPassengerSingleSelCellDelegate> _delegate;
    UILabel *_namelabel;
    UIButton *_cbtn;
    UIButton *_editBtn;
}

@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIButton *cbtn; // @synthesize cbtn=_cbtn;
@property(retain, nonatomic) UILabel *namelabel; // @synthesize namelabel=_namelabel;
@property(nonatomic) __weak id <CTPassengerSingleSelCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CTPassengerNode *pNode; // @synthesize pNode=_pNode;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createLabel:(id)arg1;
- (void)handleEditNode:(id)arg1;
- (void)handleCheckBtn:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

