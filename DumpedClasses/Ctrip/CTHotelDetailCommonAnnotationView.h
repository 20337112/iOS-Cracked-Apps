//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTMapBaseAnnotationView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface CTHotelDetailCommonAnnotationView : CTMapBaseAnnotationView
{
    NSString *name;
    NSString *hoteladdress;
    NSString *driveStr;
    long long typeFlag;
    _Bool isShowBook;
    UIButton *_backBtn;
    UIImageView *_mBackgroundImage;
    UIImageView *_mBackgroundImageArrow;
    UILabel *_nameLabel;
    UILabel *_distanceLabe;
    UILabel *_locationDisLabel;
    UIButton *_bookingBtn;
}

@property(nonatomic) __weak UIButton *bookingBtn; // @synthesize bookingBtn=_bookingBtn;
@property(nonatomic) __weak UILabel *locationDisLabel; // @synthesize locationDisLabel=_locationDisLabel;
@property(retain, nonatomic) UILabel *distanceLabe; // @synthesize distanceLabe=_distanceLabe;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *mBackgroundImageArrow; // @synthesize mBackgroundImageArrow=_mBackgroundImageArrow;
@property(retain, nonatomic) UIImageView *mBackgroundImage; // @synthesize mBackgroundImage=_mBackgroundImage;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)showFilterLocationInfo;
- (double)labelWidth;
- (void)setRightMaskCorner;
- (void)setdriveText:(id)arg1;
- (void)showHotelAndDistanceInfo:(id)arg1;
- (void)selectBtnAction:(id)arg1;
- (void)gotoBooking:(id)arg1;
- (void)setInformationWithAnnotation:(id)arg1;

@end

