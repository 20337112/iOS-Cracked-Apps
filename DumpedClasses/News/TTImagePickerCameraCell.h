//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIImageView, UIView;

@interface TTImagePickerCameraCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_mask;
}

@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectedCountDidChange:(id)arg1;
- (void)imageAction;
- (void)interceptTapAction;
- (id)initWithFrame:(struct CGRect)arg1;

@end

