//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PBMessage : NSObject
{
}

- (id)readMessage:(id)arg1 parseType:(id)arg2;
- (id)readValueWithStream:(id)arg1 dataType:(int)arg2 parseType:(id)arg3;
- (id)readDataWithStream:(Class)arg1 stream:(id)arg2;
- (id)getCTAnnotationModelWithTag:(int)arg1 bean:(id)arg2;
- (void)writeDataWithTag:(int)arg1 stream:(id)arg2 value:(id)arg3 dataType:(int)arg4 isComputeTag:(_Bool)arg5;
- (void)writeDataWithStream:(id)arg1 stream:(id)arg2;
- (int)serializedPackedSizeWithArray:(id)arg1 tag:(int)arg2 dataType:(int)arg3;
- (int)serializedSizeWithArray:(id)arg1 tag:(int)arg2 dataType:(int)arg3;
- (int)serializedSizeWithTag:(int)arg1 value:(id)arg2 dataType:(int)arg3 isComputeTag:(_Bool)arg4;
- (int)serializedSize:(id)arg1;

@end

