//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface CTChatHttpMessage : NSObject
{
    NSString *_from;
    NSString *_to;
    long long _conversationType;
    NSDictionary *_body;
}

@property(retain, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(retain, nonatomic) NSString *to; // @synthesize to=_to;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
- (void).cxx_destruct;

@end

