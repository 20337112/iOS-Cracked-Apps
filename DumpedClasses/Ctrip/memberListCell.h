//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface memberListCell : UITableViewCell
{
    UILabel *line;
    _Bool _showLeaderLab;
    UILabel *title;
    UIImageView *headerImg;
    UILabel *leaderLab;
}

@property(nonatomic) _Bool showLeaderLab; // @synthesize showLeaderLab=_showLeaderLab;
@property(retain, nonatomic) UILabel *leaderLab; // @synthesize leaderLab;
@property(retain, nonatomic) UIImageView *headerImg; // @synthesize headerImg;
@property(retain, nonatomic) UILabel *title; // @synthesize title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
