//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTNetworkProxy : NSObject
{
    NSString *address;
    NSString *port;
}

+ (id)proxyObjectWithAddress:(id)arg1 port:(id)arg2;
@property(copy, nonatomic) NSString *port; // @synthesize port;
@property(copy, nonatomic) NSString *address; // @synthesize address;
- (void)initData;
- (id)init;
- (void)dealloc;

@end

