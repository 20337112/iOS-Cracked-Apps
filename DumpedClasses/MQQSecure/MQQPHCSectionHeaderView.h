//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface MQQPHCSectionHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

+ (id)mqqreuseIdentifier;
@property(readonly, retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

