//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WopcBasicApiService : NSObject
{
    _Bool _needAsync;
    NSString *_tidaApiName;
    NSString *_appkey;
    NSString *_sellerNick;
    NSString *_accesstoken;
    NSString *_domain;
    id _methodParam;
    NSDictionary *_extraParam;
    NSString *_eventName;
    CDUnknownBlockType _apiCallback;
}

@property(copy, nonatomic) CDUnknownBlockType apiCallback; // @synthesize apiCallback=_apiCallback;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(nonatomic) _Bool needAsync; // @synthesize needAsync=_needAsync;
@property(retain, nonatomic) NSDictionary *extraParam; // @synthesize extraParam=_extraParam;
@property(retain, nonatomic) id methodParam; // @synthesize methodParam=_methodParam;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *accesstoken; // @synthesize accesstoken=_accesstoken;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *tidaApiName; // @synthesize tidaApiName=_tidaApiName;
- (void).cxx_destruct;
- (void)executeWithView:(id)arg1 withViewController:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)initWithTidaApi:(id)arg1 needAsync:(_Bool)arg2;
- (id)initWithTidaApi:(id)arg1;

@end
