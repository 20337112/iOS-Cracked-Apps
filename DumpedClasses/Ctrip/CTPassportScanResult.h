//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTScanResult.h"

@class NSDate, NSString, UIImage;

@interface CTPassportScanResult : CTScanResult
{
    int _familyNameIndex;
    int _familyNameLength;
    int _givenNameIndex;
    int _givenNameLength;
    _Bool _gotLegalData;
    NSString *_oriGivenName;
    NSString *_oriFamilyName;
    NSString *_oriPassportID;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_passportID;
    NSString *_countryCode;
    NSDate *_birthday;
    NSDate *_expirationDate;
    long long _gender;
    UIImage *_familyNameImage;
    UIImage *_givenNameImage;
    UIImage *_idImage;
}

@property(retain, nonatomic) UIImage *idImage; // @synthesize idImage=_idImage;
@property(retain, nonatomic) UIImage *givenNameImage; // @synthesize givenNameImage=_givenNameImage;
@property(retain, nonatomic) UIImage *familyNameImage; // @synthesize familyNameImage=_familyNameImage;
@property(nonatomic) _Bool gotLegalData; // @synthesize gotLegalData=_gotLegalData;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *passportID; // @synthesize passportID=_passportID;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *oriPassportID; // @synthesize oriPassportID=_oriPassportID;
@property(retain, nonatomic) NSString *oriFamilyName; // @synthesize oriFamilyName=_oriFamilyName;
@property(retain, nonatomic) NSString *oriGivenName; // @synthesize oriGivenName=_oriGivenName;
- (void).cxx_destruct;
- (void)cropImage:(id)arg1 inRect:(struct CGRect)arg2 withPositions:(id)arg3;
- (void)processPassportScanResult:(id)arg1;
- (id)initWithScanResult:(id)arg1;

@end

