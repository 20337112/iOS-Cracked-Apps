//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TaxiFee : NSObject
{
    NSString *name_;
    NSString *time_;
    NSString *unitFee_;
    NSString *startFee_;
    NSString *fee_;
}

@property(copy, nonatomic) NSString *fee; // @synthesize fee=fee_;
@property(copy, nonatomic) NSString *startFee; // @synthesize startFee=startFee_;
@property(copy, nonatomic) NSString *unitFee; // @synthesize unitFee=unitFee_;
@property(copy, nonatomic) NSString *time; // @synthesize time=time_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
- (void).cxx_destruct;

@end
