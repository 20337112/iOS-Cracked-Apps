//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface CTTourSearchUpAdverCell : UITableViewCell
{
    UIView *_upAdverView;
    UIView *_downAdverView;
    UILabel *_overlabel;
    UIView *_layerView;
}

+ (id)nib;
@property(retain, nonatomic) UIView *layerView; // @synthesize layerView=_layerView;
@property(nonatomic) __weak UILabel *overlabel; // @synthesize overlabel=_overlabel;
@property(nonatomic) __weak UIView *downAdverView; // @synthesize downAdverView=_downAdverView;
@property(nonatomic) __weak UIView *upAdverView; // @synthesize upAdverView=_upAdverView;
- (void).cxx_destruct;
- (void)setClosedAdver:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

