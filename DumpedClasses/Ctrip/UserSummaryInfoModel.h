//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface UserSummaryInfoModel : CTBusinessBean
{
    NSString *userID;
    NSString *userName;
    NSString *mobilephone;
    NSString *bindedMobilePhone;
    NSString *telephone;
    int gender;
    NSString *address;
    NSString *postCode;
    NSString *birthday;
    NSString *email;
    int experience;
    int vipGrade;
    NSString *vipGradeRemark;
    NSString *signUpdate;
    NSString *vOIPId;
    NSString *vOIPPassword;
    NSString *callToNumber;
    _Bool isOpenVOIP;
    NSString *authentication;
    NSMutableArray *userIconList;
    NSString *nickname;
    NSMutableArray *extendedPropertiesList;
}

@property(retain, nonatomic) NSMutableArray *extendedPropertiesList; // @synthesize extendedPropertiesList;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSMutableArray *userIconList; // @synthesize userIconList;
@property(copy, nonatomic) NSString *authentication; // @synthesize authentication;
@property(nonatomic) _Bool isOpenVOIP; // @synthesize isOpenVOIP;
@property(copy, nonatomic) NSString *callToNumber; // @synthesize callToNumber;
@property(copy, nonatomic) NSString *vOIPPassword; // @synthesize vOIPPassword;
@property(copy, nonatomic) NSString *vOIPId; // @synthesize vOIPId;
@property(copy, nonatomic) NSString *signUpdate; // @synthesize signUpdate;
@property(copy, nonatomic) NSString *vipGradeRemark; // @synthesize vipGradeRemark;
@property(nonatomic) int vipGrade; // @synthesize vipGrade;
@property(nonatomic) int experience; // @synthesize experience;
@property(copy, nonatomic) NSString *email; // @synthesize email;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) int gender; // @synthesize gender;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone;
@property(copy, nonatomic) NSString *bindedMobilePhone; // @synthesize bindedMobilePhone;
@property(copy, nonatomic) NSString *mobilephone; // @synthesize mobilephone;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
@property(copy, nonatomic) NSString *userID; // @synthesize userID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

