//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMBlockCaptureVariable : NSObject
{
    unsigned long long _varType;
    void *_obj;
    void *_varPtr;
    NSString *_objDisposeDesc;
    NSString *_objCopyFuncDesc;
}

@property(copy, nonatomic) NSString *objCopyFuncDesc; // @synthesize objCopyFuncDesc=_objCopyFuncDesc;
@property(copy, nonatomic) NSString *objDisposeDesc; // @synthesize objDisposeDesc=_objDisposeDesc;
@property(nonatomic) void *varPtr; // @synthesize varPtr=_varPtr;
@property(readonly, nonatomic) void *obj; // @synthesize obj=_obj;
@property(nonatomic) unsigned long long varType; // @synthesize varType=_varType;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType objDisposeFunc;
@property(readonly, nonatomic) CDUnknownFunctionPointerType objCopyFunc;
- (id)initWithVariablePtr:(void *)arg1 type:(unsigned long long)arg2;

@end
