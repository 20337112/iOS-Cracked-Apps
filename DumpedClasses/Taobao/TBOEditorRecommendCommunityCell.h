//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class NSMutableArray, TBOTitleView;

@interface TBOEditorRecommendCommunityCell : TBOBaseCell
{
    NSMutableArray *_imageViews;
    TBOTitleView *_titleView;
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) TBOTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

