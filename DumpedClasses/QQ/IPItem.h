//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZAutoModel.h"

#import "NSCoding.h"

@class NSString;

@interface IPItem : QZAutoModel <NSCoding>
{
    long long _apn;
    NSString *_ip;
    NSString *_port;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) long long apn; // @dynamic apn;
@property(retain, nonatomic) NSString *ip; // @dynamic ip;
@property(retain, nonatomic) NSString *port; // @dynamic port;

@end
