//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface QREConfigResourceDowload : NSObject
{
    _Bool _fileUpdate;
    NSObject<OS_dispatch_queue> *_downloadQueue;
    NSMutableDictionary *_downloadingResource;
    NSMutableDictionary *_failedResource;
}

+ (id)getImageDir;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(nonatomic) _Bool fileUpdate; // @synthesize fileUpdate=_fileUpdate;
@property(retain, nonatomic) NSMutableDictionary *failedResource; // @synthesize failedResource=_failedResource;
@property(retain, nonatomic) NSMutableDictionary *downloadingResource; // @synthesize downloadingResource=_downloadingResource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
- (void).cxx_destruct;
- (void)checkDownloadFailed;
- (id)_fileMD5:(id)arg1;
- (void)downloadPicture:(id)arg1 md5:(id)arg2 timeout:(double)arg3 retryCount:(long long)arg4;
- (void)download:(id)arg1;
- (id)init;

@end

