//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HotelDownloadableTrace : NSObject
{
    _Bool _success;
    int _type;
    int _commitID;
    int _totalCount;
    int _errorType;
    NSString *_md5;
    NSString *_url;
    double _downloadDuration;
    double _applyDuration;
    NSString *_errorDesc;
    double _md5Duration;
    double _unzipDuration;
    double _loadDuration;
    double _overrideDuration;
    double _cloneDuration;
    double _icloneDuration;
    unsigned long long _dataLen;
}

@property(nonatomic) unsigned long long dataLen; // @synthesize dataLen=_dataLen;
@property(nonatomic) double icloneDuration; // @synthesize icloneDuration=_icloneDuration;
@property(nonatomic) double cloneDuration; // @synthesize cloneDuration=_cloneDuration;
@property(nonatomic) double overrideDuration; // @synthesize overrideDuration=_overrideDuration;
@property(nonatomic) double loadDuration; // @synthesize loadDuration=_loadDuration;
@property(nonatomic) double unzipDuration; // @synthesize unzipDuration=_unzipDuration;
@property(nonatomic) double md5Duration; // @synthesize md5Duration=_md5Duration;
@property(copy, nonatomic) NSString *errorDesc; // @synthesize errorDesc=_errorDesc;
@property(nonatomic) int errorType; // @synthesize errorType=_errorType;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) double applyDuration; // @synthesize applyDuration=_applyDuration;
@property(nonatomic) double downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int commitID; // @synthesize commitID=_commitID;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithHotelDownloadableData:(id)arg1;

@end

