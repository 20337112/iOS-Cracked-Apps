//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSString;

@interface RetrievePasswordObject : KugouObject
{
    NSString *_mobile;
    NSString *_email;
    unsigned long long _type;
    NSString *_user;
    NSString *_msg;
    unsigned long long _count;
}

+ (id)initWithDic:(id)arg1;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
- (void).cxx_destruct;

@end
