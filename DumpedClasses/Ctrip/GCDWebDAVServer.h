//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServer.h"

@class NSArray, NSString;

@interface GCDWebDAVServer : GCDWebServer
{
    NSString *_uploadDirectory;
    NSArray *_allowedExtensions;
    _Bool _allowHidden;
}

@property(nonatomic) _Bool allowHiddenItems; // @synthesize allowHiddenItems=_allowHidden;
@property(copy, nonatomic) NSArray *allowedFileExtensions; // @synthesize allowedFileExtensions=_allowedExtensions;
@property(readonly, nonatomic) NSString *uploadDirectory; // @synthesize uploadDirectory=_uploadDirectory;
- (void).cxx_destruct;
- (id)initWithUploadDirectory:(id)arg1;
- (id)performUNLOCK:(id)arg1;
- (id)performLOCK:(id)arg1;
- (id)performPROPPATCH:(id)arg1;
- (id)performPROPFIND:(id)arg1;
- (void)_addPropertyResponseForItem:(id)arg1 resource:(id)arg2 properties:(long long)arg3 xmlString:(id)arg4;
- (id)performCOPY:(id)arg1 isMove:(_Bool)arg2;
- (id)performMKCOL:(id)arg1;
- (id)performDELETE:(id)arg1;
- (id)performPUT:(id)arg1;
- (id)performGET:(id)arg1;
- (id)performOPTIONS:(id)arg1;
- (_Bool)_checkFileExtension:(id)arg1;
- (_Bool)_checkSandboxedPath:(id)arg1;
- (_Bool)shouldCreateDirectoryAtPath:(id)arg1;
- (_Bool)shouldDeleteItemAtPath:(id)arg1;
- (_Bool)shouldCopyItemFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)shouldMoveItemFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)shouldUploadFileAtPath:(id)arg1 withTemporaryFile:(id)arg2;

// Remaining properties
@property(nonatomic) id <GCDWebDAVServerDelegate> delegate; // @dynamic delegate;

@end

