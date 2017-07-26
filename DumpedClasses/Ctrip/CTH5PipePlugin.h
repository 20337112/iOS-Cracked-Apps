//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTH5Plugin.h"

@class NSMutableDictionary;

@interface CTH5PipePlugin : CTH5Plugin
{
    NSMutableDictionary *_requestDict;
}

@property(retain, nonatomic) NSMutableDictionary *requestDict; // @synthesize requestDict=_requestDict;
- (void).cxx_destruct;
- (void)clear;
- (void)abortHTTPRequest:(id)arg1;
- (void)sendHTTPPipeRequest:(id)arg1;
- (id)requestWithURL:(id)arg1 method:(id)arg2 path:(id)arg3 parameterList:(id)arg4;
- (void)sendH5PipeRequest:(id)arg1;
- (void)removeRequestById:(id)arg1;
- (id)init;

@end

