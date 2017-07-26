//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UILabel, UIView;

@interface CTDiscoverSectionFooterReusableView : UICollectionReusableView
{
    id <SelectNextTripDelegate> _delegate;
    UIView *_nextTripView;
    UILabel *_footerTitleLabel;
    NSString *_nextCityName;
    UILabel *_nextTileLabel;
}

@property(nonatomic) __weak UILabel *nextTileLabel; // @synthesize nextTileLabel=_nextTileLabel;
@property(copy, nonatomic) NSString *nextCityName; // @synthesize nextCityName=_nextCityName;
@property(nonatomic) __weak UILabel *footerTitleLabel; // @synthesize footerTitleLabel=_footerTitleLabel;
@property(nonatomic) __weak UIView *nextTripView; // @synthesize nextTripView=_nextTripView;
@property(nonatomic) __weak id <SelectNextTripDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)awakeFromNib;

@end

