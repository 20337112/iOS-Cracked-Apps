//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTViewModel.h"

@class NSString;

@interface RoomCompareInfoViewModel : CTViewModel
{
    int _roomType;
    int _roomPriceStatus;
    NSString *_targetUrl;
    NSString *_compareIconUrl;
    NSString *_compareMainTitle;
    NSString *_compareSubTitle;
}

@property(copy, nonatomic) NSString *compareSubTitle; // @synthesize compareSubTitle=_compareSubTitle;
@property(copy, nonatomic) NSString *compareMainTitle; // @synthesize compareMainTitle=_compareMainTitle;
@property(copy, nonatomic) NSString *compareIconUrl; // @synthesize compareIconUrl=_compareIconUrl;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(nonatomic) int roomPriceStatus; // @synthesize roomPriceStatus=_roomPriceStatus;
@property(nonatomic) int roomType; // @synthesize roomType=_roomType;
- (void).cxx_destruct;
- (id)init;

@end

