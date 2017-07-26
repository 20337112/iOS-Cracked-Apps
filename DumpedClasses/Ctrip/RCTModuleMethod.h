//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTBridgeMethod.h"

@class NSArray, NSDictionary, NSInvocation, NSString;

@interface RCTModuleMethod : NSObject <RCTBridgeMethod>
{
    Class _moduleClass;
    NSInvocation *_invocation;
    NSArray *_argumentBlocks;
    NSString *_methodSignature;
    SEL _selector;
    NSDictionary *_profileArgs;
    NSString *_JSMethodName;
    unsigned long long _functionType;
}

@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
@property(readonly, nonatomic) unsigned long long functionType; // @synthesize functionType=_functionType;
@property(readonly, copy, nonatomic) NSString *JSMethodName; // @synthesize JSMethodName=_JSMethodName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)methodName;
- (void)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
@property(readonly, copy, nonatomic) NSDictionary *profileArgs;
@property(readonly, nonatomic) SEL selector;
- (void)processMethodSignature;
- (id)initWithMethodSignature:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

