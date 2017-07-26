//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQShortVideoRecorder : NSObject
{
    NSMutableDictionary *_dic;
}

+ (id)sharedInstance;
@property(retain) NSMutableDictionary *dic; // @synthesize dic=_dic;
- (id)recordFilePath;
- (_Bool)load;
- (_Bool)flush;
- (id)getQQAssetMd5:(id)arg1;
- (id)getMd5:(id)arg1;
- (_Bool)isIndexFile:(id)arg1;
- (id)findCompressedVideo:(id)arg1;
- (_Bool)recordCompressedVideo:(id)arg1 withSourceVideo:(id)arg2;

@end
