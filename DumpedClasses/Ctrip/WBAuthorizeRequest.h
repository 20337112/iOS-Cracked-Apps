//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class NSString;

@interface WBAuthorizeRequest : WBBaseRequest
{
    _Bool _shouldShowWebViewForAuthIfCannotSSO;
    NSString *redirectURI;
    NSString *scope;
}

+ (Class)associateResponseClass;
@property(nonatomic) _Bool shouldShowWebViewForAuthIfCannotSSO; // @synthesize shouldShowWebViewForAuthIfCannotSSO=_shouldShowWebViewForAuthIfCannotSSO;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (id)init;

@end

