//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DYCModule.h"

@interface DYCBitcodeModule : DYCModule
{
    struct LLVMOpaqueModule *_module;
}

- (id)operatingStatus;
- (void *)mainFunctionLocation;
- (id)mainSourceFilePath;
- (void)unloadFromRuntime;
- (_Bool)loadSourceData:(id)arg1 error:(id *)arg2;

@end
