//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol APCoverViewDelegate;

@interface APCoverView : UIView
{
    UIImageView *_imageView;
    id <APCoverViewDelegate> _delegate;
}

@property(nonatomic) __weak id <APCoverViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

