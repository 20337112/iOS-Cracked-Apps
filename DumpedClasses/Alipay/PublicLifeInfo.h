//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCoding.h"

@class NSString;

@interface PublicLifeInfo : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasPublicName;
    _Bool _hasLogoUrl;
    _Bool _hasCategory;
    _Bool _hasBackgroundUrl;
    NSString *_publicName;
    NSString *_logoUrl;
    NSString *_category;
    NSString *_backgroundUrl;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *publicName; // @synthesize publicName=_publicName;
@property(readonly) _Bool hasBackgroundUrl; // @synthesize hasBackgroundUrl=_hasBackgroundUrl;
@property(readonly) _Bool hasCategory; // @synthesize hasCategory=_hasCategory;
@property(readonly) _Bool hasLogoUrl; // @synthesize hasLogoUrl=_hasLogoUrl;
@property(readonly) _Bool hasPublicName; // @synthesize hasPublicName=_hasPublicName;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

