//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UILabel, UIView;

@interface CTTrainQiangRaidersCell : CTCustomeGroupTableViewCell
{
    id <CTTrainQiangRaidersCellDelegate> _delegate;
    UIView *_containerView;
    UILabel *_raidersLabel;
}

+ (double)heightOfRaidersCell:(id)arg1;
@property(nonatomic) __weak UILabel *raidersLabel; // @synthesize raidersLabel=_raidersLabel;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <CTTrainQiangRaidersCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showRaiders:(id)arg1;
- (void)moreAction:(id)arg1;
- (void)awakeFromNib;

@end

