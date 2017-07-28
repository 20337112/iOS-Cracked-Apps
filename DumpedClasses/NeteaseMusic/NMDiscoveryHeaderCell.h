//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NMDiscoveryHeaderView, NSString, UIButton, UIImage;

@interface NMDiscoveryHeaderCell : UITableViewCell
{
    NMDiscoveryHeaderView *_headerView;
    UIButton *_otherButton;
    UIImage *_otherImage;
    _Bool _enabelMoreButton;
    double _bottomEdgeInset;
    id <NMDiscoveryHeaderCellDelegate> _delegate;
    unsigned long long _type;
    id _resource;
}

+ (double)mvChoiceHeaderHeight;
+ (double)discoveryToplistHeaderHeight;
+ (double)discoveryDjHeaderHeight;
+ (double)discoveryHeaderHeight;
+ (double)mostHeight;
+ (double)leastHeight;
+ (double)heightForSkinThemeHeaderCell;
@property(retain, nonatomic) id resource; // @synthesize resource=_resource;
@property(nonatomic) _Bool enabelMoreButton; // @synthesize enabelMoreButton=_enabelMoreButton;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <NMDiscoveryHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double bottomEdgeInset; // @synthesize bottomEdgeInset=_bottomEdgeInset;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subTitle; // @dynamic subTitle;
@property(nonatomic) double horizontalEdgeInset; // @dynamic horizontalEdgeInset;
@property(nonatomic) double topEdgeInset; // @dynamic topEdgeInset;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)showOtherButton:(_Bool)arg1 withTitle:(id)arg2 withIcon:(id)arg3;
- (void)enableCellWithStyle:(unsigned long long)arg1 withResource:(id)arg2;
- (void)enableCellWithStyle:(unsigned long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)otherButtonClicked:(id)arg1;
- (void)moreButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)adjustContentPositionToSkinThemeHeaderCell;

@end
