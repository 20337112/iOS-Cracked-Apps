//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSNumber, NSString;

@interface KugouMVSpecialAction : UserActionRecord
{
    NSNumber *_vid;
    NSString *_fromSource;
    unsigned long long _errorCode;
}

@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(retain, nonatomic) NSNumber *vid; // @synthesize vid=_vid;
- (void)coding;
- (void)dealloc;

@end
