//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class LiveUserModel, MessageCommon, NSNumber, NSString;

@interface GiftMessage : MTLModel <MTLJSONSerializing>
{
    MessageCommon *_commonMode;
    LiveUserModel *_user;
    NSNumber *_fanTicketCount;
    NSNumber *_giftID;
    NSNumber *_repeatCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *repeatCount; // @synthesize repeatCount=_repeatCount;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
@property(retain, nonatomic) NSNumber *fanTicketCount; // @synthesize fanTicketCount=_fanTicketCount;
@property(retain, nonatomic) LiveUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) MessageCommon *commonMode; // @synthesize commonMode=_commonMode;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
