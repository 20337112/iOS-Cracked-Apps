//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CTVectorImageView, UILabel, UIView;

@interface CTSearchAdItem : UITableViewCell
{
    CTVectorImageView *_leftImageView;
    UILabel *_contentLabel;
    UIView *_lineView;
    _Bool _isClearItem;
    _Bool _isLineHidden;
}

@property(nonatomic) _Bool isLineHidden; // @synthesize isLineHidden=_isLineHidden;
@property(nonatomic) _Bool isClearItem; // @synthesize isClearItem=_isClearItem;
- (void).cxx_destruct;
- (void)changeToClearItem:(_Bool)arg1;
- (void)setContent:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

