//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QYCinemaOrderListData : NSObject
{
    NSArray *_paid;
    NSArray *_unpaid;
    NSArray *_all;
    NSString *_timestamp;
    NSString *_code;
}

@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSArray *all; // @synthesize all=_all;
@property(retain, nonatomic) NSArray *unpaid; // @synthesize unpaid=_unpaid;
@property(retain, nonatomic) NSArray *paid; // @synthesize paid=_paid;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

