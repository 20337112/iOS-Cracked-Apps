//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSFWebUtils : NSObject
{
}

+ (id)decodeUin:(id)arg1;
+ (id)encodeUin:(id)arg1;
+ (void)goToWebView:(id)arg1 url:(id)arg2 title:(id)arg3;
+ (void)goToExchange:(id)arg1 adTag:(id)arg2;
+ (void)goToReceiveFlowers:(id)arg1 isOwner:(_Bool)arg2 flowerCount:(int)arg3 guestUin:(id)arg4 guestTinyID:(id)arg5 sourceType:(long long)arg6 isFresh:(_Bool)arg7 adTag:(id)arg8;
+ (void)goToFlowerShopFromGroup:(id)arg1 uin:(id)arg2 groupCode:(id)arg3 sourceType:(long long)arg4 adTag:(id)arg5;
+ (void)goToFlowerShop:(id)arg1 uin:(id)arg2 tinyID:(id)arg3 sig:(id)arg4 sourceType:(long long)arg5 adTag:(id)arg6;

@end

