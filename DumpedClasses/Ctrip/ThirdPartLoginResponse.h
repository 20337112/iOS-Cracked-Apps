//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ThirdPartLoginResponse : CTBusinessBean
{
    NSString *ticket;
    NSString *uID;
    _Bool isNew;
    NSString *bindedMobilePhone;
    NSString *bindedEmail;
    int result;
    NSString *resultMessage;
}

@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) int result; // @synthesize result;
@property(copy, nonatomic) NSString *bindedEmail; // @synthesize bindedEmail;
@property(copy, nonatomic) NSString *bindedMobilePhone; // @synthesize bindedMobilePhone;
@property(nonatomic) _Bool isNew; // @synthesize isNew;
@property(copy, nonatomic) NSString *uID; // @synthesize uID;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

