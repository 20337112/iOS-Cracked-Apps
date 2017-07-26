//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OIndexMayLikeModel : O2OHTTPModel
{
    NSString *_labelId;
    NSString *_pageVersion;
    NSString *_templateType;
    NSString *_pageType;
}

@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *pageVersion; // @synthesize pageVersion=_pageVersion;
@property(retain, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
- (void).cxx_destruct;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)key;

@end
