//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSArray, NSDictionary, NSString;

@interface HybridPackageServiceRequestV2 : CTBusinessBean
{
    int _dataVersion;
    int _originalDataVersion;
    NSString *_appID;
    NSString *_buildID;
    NSString *_envCode;
    NSArray *_requestList;
    NSDictionary *_metaInfo;
}

@property(retain, nonatomic) NSDictionary *metaInfo; // @synthesize metaInfo=_metaInfo;
@property(retain, nonatomic) NSArray *requestList; // @synthesize requestList=_requestList;
@property(copy, nonatomic) NSString *envCode; // @synthesize envCode=_envCode;
@property(nonatomic) int originalDataVersion; // @synthesize originalDataVersion=_originalDataVersion;
@property(copy, nonatomic) NSString *buildID; // @synthesize buildID=_buildID;
@property(nonatomic) int dataVersion; // @synthesize dataVersion=_dataVersion;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

