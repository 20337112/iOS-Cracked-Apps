//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CTImageUploaderManager : NSObject
{
    NSMutableArray *_imageUploaderClients;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *imageUploaderClients; // @synthesize imageUploaderClients=_imageUploaderClients;
- (void).cxx_destruct;
- (void)cancelUploadingRequest:(id)arg1;
- (void)cancelUploadingRequest;
- (id)uploadImages:(id)arg1 options:(id)arg2 singleCompleted:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)init;

@end

