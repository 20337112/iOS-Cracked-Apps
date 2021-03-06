//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSBundle, NSError, NSString;

@interface DYCModule : NSObject
{
    _Bool _loaded;
    NSBundle *_bundle;
    NSString *_name;
    NSError *_loadingError;
}

+ (void)setDecryptor:(id)arg1;
+ (id)decryptor;
+ (id)moduleWithBundle:(id)arg1 create:(_Bool)arg2;
+ (id)allModules;
+ (id)allMutableModules;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
@property(readonly, nonatomic) int bundleStructureVersion;
@property(readonly, nonatomic) _Bool isMarkedAsEncryptedModule;
@property(readonly, copy, nonatomic) NSString *currentDeviceSourceDirectory;
- (id)currentDeviceSourceFolderName;
- (id)currentDeviceSourceFolderNameV2;
- (id)currentDeviceSourceFolderNameV1;
- (id)mainSourceFilePath;
- (void *)mainFunctionLocation;
- (void)unloadFromRuntime;
- (_Bool)loadSourceData:(id)arg1 error:(id *)arg2;
- (id)operatingStatus;
- (id)invokeMainWithUserInfo:(id)arg1;
- (void)unload;
- (_Bool)validateBundle:(id)arg1 error:(id *)arg2;
- (_Bool)loadAndReturnError:(id *)arg1;
- (id)initWithBundle:(id)arg1;
- (id)init;

@end

