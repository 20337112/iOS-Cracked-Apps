//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYShareConfigManager : DataLoadManager
{
    int _isnew;
    NSString *_share_type;
    NSString *_auth;
    NSString *_ispingback;
    NSString *_p;
    NSString *_p1;
    NSString *_p2;
    NSString *_c1;
    NSString *_s1;
    NSString *_s2;
    NSString *_r;
    NSString *_u;
    NSString *_pu;
}

@property(copy, nonatomic) NSString *pu; // @synthesize pu=_pu;
@property(copy, nonatomic) NSString *u; // @synthesize u=_u;
@property(copy, nonatomic) NSString *r; // @synthesize r=_r;
@property(copy, nonatomic) NSString *s2; // @synthesize s2=_s2;
@property(copy, nonatomic) NSString *s1; // @synthesize s1=_s1;
@property(copy, nonatomic) NSString *c1; // @synthesize c1=_c1;
@property(copy, nonatomic) NSString *p2; // @synthesize p2=_p2;
@property(copy, nonatomic) NSString *p1; // @synthesize p1=_p1;
@property(copy, nonatomic) NSString *p; // @synthesize p=_p;
@property(copy, nonatomic) NSString *ispingback; // @synthesize ispingback=_ispingback;
@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(nonatomic) int isnew; // @synthesize isnew=_isnew;
@property(copy, nonatomic) NSString *share_type; // @synthesize share_type=_share_type;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;
- (void)setConfigType:(unsigned long long)arg1;
- (unsigned long long)configType;

@end

