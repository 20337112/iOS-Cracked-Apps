//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CardInformationModel : CTBusinessBean
{
    int cardType;
    int cardTypeID;
    NSString *bankCode;
}

@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode;
@property(nonatomic) int cardTypeID; // @synthesize cardTypeID;
@property(nonatomic) int cardType; // @synthesize cardType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

