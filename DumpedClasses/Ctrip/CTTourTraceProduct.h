//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface CTTourTraceProduct : NSObject <NSCoding, NSCopying>
{
    NSString *_Date;
    NSArray *_ProductIdList;
    long long _TotalCount;
    NSArray *_TraceInfoList;
}

@property(retain) NSArray *TraceInfoList; // @synthesize TraceInfoList=_TraceInfoList;
@property long long TotalCount; // @synthesize TotalCount=_TotalCount;
@property(retain) NSArray *ProductIdList; // @synthesize ProductIdList=_ProductIdList;
@property(retain) NSString *Date; // @synthesize Date=_Date;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

