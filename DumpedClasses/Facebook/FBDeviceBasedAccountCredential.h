//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBDeviceBasedAccountCredential : FBValueObject <NSCopying>
{
    _Bool _hasPin;
    NSString *_nonce;
}

@property(readonly, nonatomic) _Bool hasPin; // @synthesize hasPin=_hasPin;
@property(readonly, copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (void).cxx_destruct;
- (id)initWithNonce:(id)arg1 hasPin:(_Bool)arg2;

@end

