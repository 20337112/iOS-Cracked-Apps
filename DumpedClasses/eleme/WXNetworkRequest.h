//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXObject.h"

@class NSDictionary, NSString;

@interface WXNetworkRequest : WXObject
{
}

+ (id)keysToEncode;
+ (id)networkRequestWithURLRequest:(id)arg1;
- (id)initWithURLRequest:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *headers; // @dynamic headers;
@property(retain, nonatomic) NSString *method; // @dynamic method;
@property(retain, nonatomic) NSString *postData; // @dynamic postData;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end
