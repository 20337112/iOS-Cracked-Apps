//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTHotelChatGiftManager : NSObject
{
    _Bool _isGettingGiftFromNet;
    int _pageIndex;
    CDUnknownBlockType _callBack;
    NSMutableArray *_giftList;
    double _giftInterval;
}

+ (id)buildGiftModel:(id)arg1;
+ (id)buildGiftMsg:(id)arg1 withTitle:(id)arg2;
+ (id)getInstance;
@property(nonatomic) double giftInterval; // @synthesize giftInterval=_giftInterval;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) _Bool isGettingGiftFromNet; // @synthesize isGettingGiftFromNet=_isGettingGiftFromNet;
@property(retain, nonatomic) NSMutableArray *giftList; // @synthesize giftList=_giftList;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)saveToLocal:(id)arg1;
- (id)giftSavedKey;
- (void)sendGift:(long long)arg1 giftNum:(int)arg2 sessionId:(long long)arg3 redList:(id)arg4 success:(CDUnknownBlockType)arg5;
- (void)sendGift:(long long)arg1 giftNum:(int)arg2 cacheBean:(id)arg3 redList:(id)arg4 success:(CDUnknownBlockType)arg5;
- (void)sendGift:(long long)arg1 sessionId:(long long)arg2 redList:(id)arg3 success:(CDUnknownBlockType)arg4;
- (void)callBackGift:(id)arg1;
- (void)update:(id)arg1;
- (void)getGiftFromNet;
- (void)getGift:(CDUnknownBlockType)arg1;
- (id)init;

@end

