//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelButtonAdapter.h"

@class CTHotelDetailCacheBean;

@interface CTHotelShareButtonAdapter : CTHotelButtonAdapter
{
    CTHotelDetailCacheBean *_mCacheBean;
}

@property(nonatomic) __weak CTHotelDetailCacheBean *mCacheBean; // @synthesize mCacheBean=_mCacheBean;
- (void).cxx_destruct;
- (void)updateBtnNormalColor:(id)arg1 highlightedColor:(id)arg2 selectedColor:(id)arg3 alpha:(double)arg4;
- (id)weiXinShareWebUrl:(id)arg1;
- (id)weixinShareImg:(id)arg1;
- (void)shareFromVC:(id)arg1 shareImg:(id)arg2;
- (void)doButtonEvent:(id)arg1;
- (id)getView;

// Remaining properties
@property(nonatomic) __weak id <CTHotelShareAdapterDelegate> delegate; // @dynamic delegate;

@end

