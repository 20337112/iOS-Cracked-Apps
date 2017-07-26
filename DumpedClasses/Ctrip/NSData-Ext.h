//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (Ext)
+ (id)dataWithBase32String:(id)arg1;
+ (id)dataFromBase64String:(id)arg1;
+ (id)dataFromRC4:(id)arg1 keyString:(id)arg2;
+ (id)dataFromRC4:(id)arg1 key:(id)arg2;
- (id)gzipDeflate;
- (id)gzipInflate;
- (id)zlibDeflate;
- (id)zlibInflate;
- (id)decodeCOBS;
- (id)encodeCOBS;
- (id)base32String;
- (struct _NSRange)rangeOfNullTerminatedBytesFrom:(int)arg1;
- (id)md5Data;
- (id)base64EncodedString;
- (id)hexStringValue;
@end

