//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPEntryGroupInfo, NSArray, UIImageView;

@interface ESPHomeNewUserBannerCell : UICollectionViewCell
{
    ESPEntryGroupInfo *_groupInfo;
    NSArray *_entries;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) ESPEntryGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (void)tapRightImageView;
- (void)tapLeftImageView;
- (void)setupRightImageView;
- (void)setUpLeftImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

