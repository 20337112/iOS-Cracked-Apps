//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface MSOAConsumerMinifestModel : NSObject
{
    NSString *_bizName;
    NSDictionary *_dependencyMap;
}

@property(retain, nonatomic) NSDictionary *dependencyMap; // @synthesize dependencyMap=_dependencyMap;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
- (void).cxx_destruct;
- (id)dictionayFromTokenComponents:(id)arg1;
- (void)mergeConsumerTokenComponets:(id)arg1;
- (void)mergeConsumerData:(id)arg1;
- (id)initWithTokenComponents:(id)arg1;
- (id)initWithData:(id)arg1;

@end

