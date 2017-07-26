//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTSDiscoverBaseCell.h"

@class CTImageView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTSDiscoverCommonCell : CTSDiscoverBaseCell
{
    UILabel *_title;
    UILabel *_subTitle;
    CTImageView *_contentImage;
    UIImageView *_markIcon;
    UILabel *_markText;
    CTImageView *_authHead;
    UILabel *_authName;
    UILabel *_city;
    UILabel *_countLabel;
    UILabel *_leftBottom1;
    UIView *_betweenLine;
    UILabel *_leftBottom2;
    NSLayoutConstraint *_imageWidth;
}

@property(nonatomic) __weak NSLayoutConstraint *imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) __weak UILabel *leftBottom2; // @synthesize leftBottom2=_leftBottom2;
@property(nonatomic) __weak UIView *betweenLine; // @synthesize betweenLine=_betweenLine;
@property(nonatomic) __weak UILabel *leftBottom1; // @synthesize leftBottom1=_leftBottom1;
@property(nonatomic) __weak UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) __weak UILabel *city; // @synthesize city=_city;
@property(nonatomic) __weak UILabel *authName; // @synthesize authName=_authName;
@property(nonatomic) __weak CTImageView *authHead; // @synthesize authHead=_authHead;
@property(nonatomic) __weak UILabel *markText; // @synthesize markText=_markText;
@property(nonatomic) __weak UIImageView *markIcon; // @synthesize markIcon=_markIcon;
@property(nonatomic) __weak CTImageView *contentImage; // @synthesize contentImage=_contentImage;
@property(nonatomic) __weak UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)cityAttributedStr:(id)arg1;
- (void)setContentWithModel:(id)arg1;
- (void)awakeFromNib;

@end

