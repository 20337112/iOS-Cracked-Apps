//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol WPSeatBottomBarDelegate;

@interface WPSeatBottomBar : UIView
{
    UIButton *_makesureButton;
    id <WPSeatBottomBarDelegate> _delegate;
    UILabel *_cinemaNameLabel;
    UILabel *_timeLabel;
    UIImageView *_typeImageView;
}

+ (id)loadXib;
@property(nonatomic) __weak UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *cinemaNameLabel; // @synthesize cinemaNameLabel=_cinemaNameLabel;
@property(nonatomic) __weak id <WPSeatBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *makesureButton; // @synthesize makesureButton=_makesureButton;
- (void).cxx_destruct;
- (void)makesureDidClick:(id)arg1;
- (void)setupViewWithCinemaModel:(id)arg1 cinemaScreenModel:(id)arg2;
- (void)awakeFromNib;

@end

