//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiGroupChatObject : QQApiObject
{
    NSString *_groupID;
    int _xo;
}

+ (id)objectWithGroup:(id)arg1;
- (void)dealloc;
- (id)initWithGroup:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *groupID; // @dynamic groupID;

@end

