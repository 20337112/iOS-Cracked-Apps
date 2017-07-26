//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTImageViewDelegate.h"

@class CTImageView, NSString, UIButton;

@interface CTFlightPromiseBookingView : UIView <CTImageViewDelegate>
{
    NSString *_detailUrl;
    _Bool _imageLoaded;
    CTImageView *_imageView;
    UIButton *_button;
    CDUnknownBlockType _loadedAction;
}

@property(copy, nonatomic) CDUnknownBlockType loadedAction; // @synthesize loadedAction=_loadedAction;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(readonly, nonatomic) CTImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)imageViewLoadImageSucceed:(id)arg1;
- (void)showDetailContent;
- (void)onButtonPressed:(id)arg1;
- (void)setImageUrl:(id)arg1 detailUrl:(id)arg2 loadedAction:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

