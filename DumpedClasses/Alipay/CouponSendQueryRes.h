//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class Merchant, NSString;

@interface CouponSendQueryRes : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultDesc;
    _Bool _hasMerchant;
    _Bool _hasFee;
    _Bool _hasExtInfo;
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    Merchant *_merchant;
    NSString *_fee;
    NSString *_extInfo;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *fee; // @synthesize fee=_fee;
@property(retain, nonatomic) Merchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly) _Bool hasExtInfo; // @synthesize hasExtInfo=_hasExtInfo;
@property(readonly) _Bool hasFee; // @synthesize hasFee=_hasFee;
@property(readonly) _Bool hasMerchant; // @synthesize hasMerchant=_hasMerchant;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

