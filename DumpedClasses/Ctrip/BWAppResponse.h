//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface BWAppResponse : NSObject
{
    int _retCode;
    NSString *_message;
    NSDictionary *_content;
}

@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

