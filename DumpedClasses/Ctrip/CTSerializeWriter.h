//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface CTSerializeWriter : NSObject
{
    unsigned long long _enc;
    NSMutableData *_dataBuilder;
}

- (void).cxx_destruct;
- (id)getNSDataWithStr:(id)arg1;
- (id)getSerializeData;
- (void)writeBlankSpace:(int)arg1;
- (void)writeUnsignedLong:(unsigned long long)arg1 Length:(int)arg2;
- (void)writeInt:(int)arg1 Length:(int)arg2;
- (void)writeString:(id)arg1 Length:(int)arg2;
- (void)writeByteArr:(id)arg1 Length:(int)arg2;
- (void)write:(id)arg1;
- (unsigned long long)getEncodingCode;
- (id)initWithNSStringEncoding:(unsigned long long)arg1;
- (id)init;

@end

