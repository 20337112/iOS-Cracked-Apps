//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GDMTUserDoubleView, NSString;

@interface GDMUserDoubleSideCell : UITableViewCell
{
    GDMTUserDoubleView *_leftView;
    GDMTUserDoubleView *_rightView;
    id _jumpNavigator;
    NSString *_utPageName;
    id _openUrlTarget;
}

+ (float)height;
@property __weak id openUrlTarget; // @synthesize openUrlTarget=_openUrlTarget;
@property(retain) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property(nonatomic) __weak id jumpNavigator; // @synthesize jumpNavigator=_jumpNavigator;
- (void).cxx_destruct;
- (void)setLeftItem:(id)arg1 rightItem:(id)arg2;
- (void)extendUserTrackByItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
