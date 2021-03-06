//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPTapButton.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface QYPPFeedDetailCircleInfoView : QYPPTapButton
{
    UIImageView *_ivCircleIcon;
    UILabel *_lblCircleName;
    UILabel *_lblPeopleCount;
    UILabel *_lblContentCount;
    UIButton *_btnEnterCircle;
    UIView *_bottomSeparatorLineView;
}

@property(retain, nonatomic) UIView *bottomSeparatorLineView; // @synthesize bottomSeparatorLineView=_bottomSeparatorLineView;
@property(retain, nonatomic) UIButton *btnEnterCircle; // @synthesize btnEnterCircle=_btnEnterCircle;
@property(retain, nonatomic) UILabel *lblContentCount; // @synthesize lblContentCount=_lblContentCount;
@property(retain, nonatomic) UILabel *lblPeopleCount; // @synthesize lblPeopleCount=_lblPeopleCount;
@property(retain, nonatomic) UILabel *lblCircleName; // @synthesize lblCircleName=_lblCircleName;
@property(retain, nonatomic) UIImageView *ivCircleIcon; // @synthesize ivCircleIcon=_ivCircleIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool needHiddenBottomSeperatorLine;
- (void)setMemberCount:(long long)arg1 totalFeed:(long long)arg2;
- (void)setCircleIconUrl:(id)arg1 circleName:(id)arg2 setMemberCount:(long long)arg3 totalFeed:(long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

