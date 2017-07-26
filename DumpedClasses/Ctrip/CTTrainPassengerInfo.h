//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTTrainPassengerInfo : NSObject
{
    _Bool _isSelected;
    _Bool _isENName;
    _Bool _isUserSelf;
    _Bool _isSavedInLocal;
    _Bool _isEdit;
    int _passengerID;
    int _checkStatus;
    NSString *_passengerType;
    NSString *_passengerName;
    NSString *_enFirstName;
    NSString *_enLastName;
    NSString *_passportType;
    NSString *_passportCode;
    NSString *_birthday;
    NSString *_checkStatusName;
    NSString *_buyColor;
    NSString *_buyNote;
    NSString *_key;
    NSString *_type;
    NSString *_passportTypeValue;
    NSString *_tempPassengerKey;
    NSString *_tipText;
    NSString *_provinceName;
    NSString *_provinceCode;
    NSString *_enterYear;
    NSString *_schoolSystem;
    NSString *_dicountFromName;
    NSString *_dicountFromCode;
    NSString *_dicountToName;
    NSString *_dicountToCode;
    NSString *_schoolName;
    NSString *_schoolCode;
    NSString *_schoolNo;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *schoolNo; // @synthesize schoolNo=_schoolNo;
@property(copy, nonatomic) NSString *schoolCode; // @synthesize schoolCode=_schoolCode;
@property(copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(copy, nonatomic) NSString *dicountToCode; // @synthesize dicountToCode=_dicountToCode;
@property(copy, nonatomic) NSString *dicountToName; // @synthesize dicountToName=_dicountToName;
@property(copy, nonatomic) NSString *dicountFromCode; // @synthesize dicountFromCode=_dicountFromCode;
@property(copy, nonatomic) NSString *dicountFromName; // @synthesize dicountFromName=_dicountFromName;
@property(copy, nonatomic) NSString *schoolSystem; // @synthesize schoolSystem=_schoolSystem;
@property(copy, nonatomic) NSString *enterYear; // @synthesize enterYear=_enterYear;
@property(copy, nonatomic) NSString *provinceCode; // @synthesize provinceCode=_provinceCode;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(copy, nonatomic) NSString *tempPassengerKey; // @synthesize tempPassengerKey=_tempPassengerKey;
@property(copy, nonatomic) NSString *passportTypeValue; // @synthesize passportTypeValue=_passportTypeValue;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *buyNote; // @synthesize buyNote=_buyNote;
@property(nonatomic) _Bool isSavedInLocal; // @synthesize isSavedInLocal=_isSavedInLocal;
@property(nonatomic) _Bool isUserSelf; // @synthesize isUserSelf=_isUserSelf;
@property(copy, nonatomic) NSString *buyColor; // @synthesize buyColor=_buyColor;
@property(copy, nonatomic) NSString *checkStatusName; // @synthesize checkStatusName=_checkStatusName;
@property(nonatomic) int checkStatus; // @synthesize checkStatus=_checkStatus;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *passportCode; // @synthesize passportCode=_passportCode;
@property(copy, nonatomic) NSString *passportType; // @synthesize passportType=_passportType;
@property(copy, nonatomic) NSString *enLastName; // @synthesize enLastName=_enLastName;
@property(copy, nonatomic) NSString *enFirstName; // @synthesize enFirstName=_enFirstName;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
@property(copy, nonatomic) NSString *passengerType; // @synthesize passengerType=_passengerType;
@property(nonatomic) int passengerID; // @synthesize passengerID=_passengerID;
@property(nonatomic) _Bool isENName; // @synthesize isENName=_isENName;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (long long)ageOfPassenger;
- (id)getPassengerKey;
- (id)bookName;
- (id)showName;
- (_Bool)isStudentTicket;
- (_Bool)isChildTicket;
- (_Bool)isEnabled;
- (id)init;

@end

