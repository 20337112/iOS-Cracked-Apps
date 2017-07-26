//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HybridPackageModel : CTBusinessBean
{
    _Bool _isForce;
    int _productId;
    int _priorityLevel;
    int _pkgDataVersion;
    int _pkgSize;
    int _increFlag;
    int _downloadRetryTimes;
    int _downloadErrorType;
    NSString *_pkgURL;
    NSString *_productName;
    NSString *_pkgType;
    NSString *_signCode;
    NSString *_pkgDescription;
    NSString *_pkgId;
    NSString *_productNameCN;
    NSString *_packageInfoID;
}

+ (id)hybridPackageModelFromSOA2ResponseDictionary:(id)arg1;
+ (id)hybridPackageModelFromDictionary:(id)arg1;
@property(nonatomic) int downloadErrorType; // @synthesize downloadErrorType=_downloadErrorType;
@property(nonatomic) int downloadRetryTimes; // @synthesize downloadRetryTimes=_downloadRetryTimes;
@property(copy, nonatomic) NSString *packageInfoID; // @synthesize packageInfoID=_packageInfoID;
@property(nonatomic) int increFlag; // @synthesize increFlag=_increFlag;
@property(copy, nonatomic) NSString *productNameCN; // @synthesize productNameCN=_productNameCN;
@property(copy, nonatomic) NSString *pkgId; // @synthesize pkgId=_pkgId;
@property(nonatomic) _Bool isForce; // @synthesize isForce=_isForce;
@property(copy, nonatomic) NSString *pkgDescription; // @synthesize pkgDescription=_pkgDescription;
@property(copy, nonatomic) NSString *signCode; // @synthesize signCode=_signCode;
@property(copy, nonatomic) NSString *pkgType; // @synthesize pkgType=_pkgType;
@property(nonatomic) int pkgSize; // @synthesize pkgSize=_pkgSize;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(nonatomic) int pkgDataVersion; // @synthesize pkgDataVersion=_pkgDataVersion;
@property(nonatomic) int priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property(copy, nonatomic) NSString *pkgURL; // @synthesize pkgURL=_pkgURL;
@property(nonatomic) int productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

