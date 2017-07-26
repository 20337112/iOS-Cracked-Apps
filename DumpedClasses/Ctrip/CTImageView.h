//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "CTImageViewDownloadProtocol.h"

@class CTIndicatorView, NSArray, NSString, NSURL, UIImage;

@interface CTImageView : UIImageView <CTImageViewDownloadProtocol>
{
    _Bool _showAnimation;
    _Bool _showingAnimation;
    _Bool _showCompleteAnimation;
    NSURL *_url;
    NSString *_pageCode;
    id <CTImageViewDelegate> _delegate;
    UIImage *_placeHoldImage;
    UIImage *_loadNothingImage;
    UIImage *_loadFailedImage;
    CTIndicatorView *_indicatorView;
    id <SDWebImageOperation> _operation;
    NSArray *_whiteList;
}

+ (id)defaultImageWithName:(id)arg1 size:(struct CGSize)arg2;
+ (void)clearImageCache;
+ (void)setConcurrentDownloadThreadCount:(long long)arg1;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(retain, nonatomic) id <SDWebImageOperation> operation; // @synthesize operation=_operation;
@property(retain, nonatomic) CTIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImage *loadFailedImage; // @synthesize loadFailedImage=_loadFailedImage;
@property(retain, nonatomic) UIImage *loadNothingImage; // @synthesize loadNothingImage=_loadNothingImage;
@property(retain, nonatomic) UIImage *placeHoldImage; // @synthesize placeHoldImage=_placeHoldImage;
@property(nonatomic, getter=isShowCompleteAnimation) _Bool showCompleteAnimation; // @synthesize showCompleteAnimation=_showCompleteAnimation;
@property(nonatomic, getter=isShowingAnimation) _Bool showingAnimation; // @synthesize showingAnimation=_showingAnimation;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) __weak id <CTImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)downloadDidFailWithURL:(id)arg1 error:(id)arg2;
- (void)downloadDidCompleteWithURL:(id)arg1 image:(id)arg2;
- (void)downloadDidProgressWithURL:(id)arg1 receivedBytes:(unsigned long long)arg2 totalBytes:(long long)arg3;
- (void)animateShowingImage;
- (void)setLoadFailed;
- (void)setLoadNothing;
- (void)stopAnimate;
- (void)startAnimate;
- (void)cancelDownloadAction;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)loadStateImages;
@property(retain, nonatomic) NSString *pageCode; // @synthesize pageCode=_pageCode;
- (void)initBaseView;
- (void)initBaseData;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlaceHoldImage:(id)arg1 loadNothingImage:(id)arg2 loadFailedImage:(id)arg3 url:(id)arg4 delegate:(id)arg5;
- (id)initWithPlaceHoldImage:(id)arg1 loadNothingImage:(id)arg2 loadFailedImage:(id)arg3 urlString:(id)arg4 delegate:(id)arg5;
- (id)initWithPlaceHoldImage:(id)arg1 url:(id)arg2 delegate:(id)arg3;
- (id)initWithPlaceHoldImage:(id)arg1 urlString:(id)arg2 delegate:(id)arg3;
- (id)initWithPlaceHoldImage:(id)arg1 delegate:(id)arg2;
- (id)initWithPlaceHoldImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)clearVectorImage;
- (void)setVectorImageName:(id)arg1 imageColor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

