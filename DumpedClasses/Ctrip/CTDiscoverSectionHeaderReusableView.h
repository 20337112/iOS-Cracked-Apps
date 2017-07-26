//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CTDiscoverSectionHeaderReusableView : UICollectionReusableView
{
    UIView *_titleView;
    UIImageView *_titleImageView;
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UIButton *_moreButton;
    UIView *_moreButonViewB;
    NSLayoutConstraint *_titleViewToTopConstraint;
    NSString *_moreUrl;
    NSString *_catalog;
}

@property(copy, nonatomic) NSString *catalog; // @synthesize catalog=_catalog;
@property(copy, nonatomic) NSString *moreUrl; // @synthesize moreUrl=_moreUrl;
@property(retain, nonatomic) NSLayoutConstraint *titleViewToTopConstraint; // @synthesize titleViewToTopConstraint=_titleViewToTopConstraint;
@property(retain, nonatomic) UIView *moreButonViewB; // @synthesize moreButonViewB=_moreButonViewB;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)openMore:(id)arg1;
- (void)awakeFromNib;

@end

