//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPDYSocketReadOp.h"

@class NSString;

@interface SPDYSocketProxyReadOp : SPDYSocketReadOp
{
    NSString *_version;
    long long _statusCode;
    NSString *_remaining;
    unsigned long long _bytesParsed;
}

- (void).cxx_destruct;
- (_Bool)needsAuth;
- (_Bool)success;
- (_Bool)tryParseResponse;
- (id)initWithTimeout:(double)arg1;

@end

