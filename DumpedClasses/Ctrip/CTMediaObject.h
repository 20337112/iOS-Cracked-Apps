//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CTMediaObject : NSObject
{
    NSData *_bytes;
    NSString *_fieldName;
    NSString *_fileName;
    NSString *_mimeType;
}

+ (id)mediaObjectWithBytes:(id)arg1 name:(id)arg2;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
- (void).cxx_destruct;

@end

