//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface OtherUserModifyRequest : CTBusinessBean
{
    int _serviceVersion;
    int _gender;
    NSString *_userName;
    NSString *_mobilephone;
    NSString *_address;
    NSString *_postCode;
    NSString *_birthday;
    NSString *_email;
    NSString *_nickname;
    NSMutableArray *_extendedPropertiesList;
}

@property(retain, nonatomic) NSMutableArray *extendedPropertiesList; // @synthesize extendedPropertiesList=_extendedPropertiesList;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *mobilephone; // @synthesize mobilephone=_mobilephone;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

