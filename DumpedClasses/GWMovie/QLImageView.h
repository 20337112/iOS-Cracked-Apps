//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QLSImageView.h"

@protocol QLImageViewDelegate;

@interface QLImageView : QLSImageView
{
    id <QLImageViewDelegate> _delegate;
}

@property(nonatomic) id <QLImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLoadImageFromCache:(id)arg1 forURL:(id)arg2;
- (void)didFailLoadWithError:(id)arg1 forURL:(id)arg2;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)didStartLoadImageForURL:(id)arg1;
- (_Bool)isUrlPathEqual:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUrlPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

