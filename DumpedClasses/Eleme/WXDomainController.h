//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXCommandDelegate.h"

@class NSString, WXDynamicDebuggerDomain;

@interface WXDomainController : NSObject <WXCommandDelegate>
{
    _Bool _enabled;
    WXDynamicDebuggerDomain *_domain;
}

+ (Class)domainClass;
+ (id)domainName;
@property(retain, nonatomic) WXDynamicDebuggerDomain *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)domain:(id)arg1 enableWithCallback:(CDUnknownBlockType)arg2;
- (void)domain:(id)arg1 disableWithCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
