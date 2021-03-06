//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPNetRequest.h"

@class NSArray, NSMutableArray, NSNumber, QYPPPubMaterialSampleVideoModel;

@interface QYPPPubMaterialListNetRequest : QYPPNetRequest
{
    _Bool _hasMore;
    NSArray *_tabsArray;
    NSMutableArray *_VideoClipsMaterialArray;
    QYPPPubMaterialSampleVideoModel *_sampleVideoModel;
    NSNumber *_createTime;
}

@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) QYPPPubMaterialSampleVideoModel *sampleVideoModel; // @synthesize sampleVideoModel=_sampleVideoModel;
@property(retain, nonatomic) NSMutableArray *VideoClipsMaterialArray; // @synthesize VideoClipsMaterialArray=_VideoClipsMaterialArray;
@property(retain, nonatomic) NSArray *tabsArray; // @synthesize tabsArray=_tabsArray;
- (void).cxx_destruct;
- (void)loadMoreDataWithType:(long long)arg1;
- (void)loadMoreDataWithWithType:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)refreshDataWithType:(long long)arg1 pageSize:(long long)arg2;
- (void)refreshDataWithType:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

