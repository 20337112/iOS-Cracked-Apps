//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTZipUtil : NSObject
{
}

+ (id)loadFileHeadWithPath:(id)arg1 length:(unsigned long long)arg2;
+ (unsigned long long)fileTypeWithPath:(id)arg1;
+ (_Bool)unzipZipOr7zFile:(id)arg1 toDir:(id)arg2;
+ (_Bool)unzipFromPath:(id)arg1 toPath:(id)arg2 deleteZipFile:(_Bool)arg3 forZipType:(unsigned long long)arg4;

@end

