//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSlotAdEventDelegate-Protocol.h"
#import "GADSlotAdLoadDelegate-Protocol.h"
#import "GADSlotDelegate-Protocol.h"

@class GADNativeAdImage, GADSlot, GADVideoController, GADVideoOptions, NSDictionary, NSString, UIImageView;
@protocol GADMediaContentDelegate;

@interface GADMediaContent : NSObject <GADSlotAdEventDelegate, GADSlotAdLoadDelegate, GADSlotDelegate>
{
    NSDictionary *_configuration;
    GADNativeAdImage *_placeholderImage;
    UIImageView *_placeholderImageView;
    _Bool _hasLoaded;
    CDUnknownBlockType _completionHandler;
    GADSlot *_slot;
    GADVideoOptions *_videoOptions;
    id <GADMediaContentDelegate> _delegate;
}

+ (id)videoSupportURL;
@property(nonatomic) __weak id <GADMediaContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (struct CGRect)frameInInterface;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)notifyVideoLoadCompletedWithError:(id)arg1;
@property(readonly, nonatomic) GADVideoController *videoController;
- (id)mediaView;
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithVideoDictionary:(id)arg1 placeholderImage:(id)arg2 videoOptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

