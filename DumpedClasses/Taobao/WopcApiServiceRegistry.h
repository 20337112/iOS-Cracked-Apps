//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WopcApiServiceRegistry : NSObject
{
    NSMutableDictionary *_apiServiceDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *apiServiceDict; // @synthesize apiServiceDict=_apiServiceDict;
- (void).cxx_destruct;
- (id)findServiceByTidaApi:(id)arg1;
- (void)regisApiServiceClass:(Class)arg1 byApi:(id)arg2;

@end

