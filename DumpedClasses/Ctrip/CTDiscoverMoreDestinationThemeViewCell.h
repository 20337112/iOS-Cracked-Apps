//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface CTDiscoverMoreDestinationThemeViewCell : UITableViewCell
{
    UIImageView *_tagImageView;
    UIView *_flagView;
    UILabel *_contentLabel;
}

@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIView *flagView; // @synthesize flagView=_flagView;
@property(nonatomic) __weak UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
- (void).cxx_destruct;
- (void)configSelectedView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

