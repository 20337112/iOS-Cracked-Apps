//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPayLogicDelegate.h"

@class NSString, SPayLogic, UINavigationController, UIView;

@interface DiDiPay : NSObject <SPayLogicDelegate>
{
    UINavigationController *_customNavigationController;
    SPayLogic *_logic;
    CDUnknownBlockType _completionBlock;
    UIView *_containerView;
}

+ (id)lastWindow;
+ (void)payWithParams:(id)arg1 inView:(id)arg2 completed:(CDUnknownBlockType)arg3;
+ (void)payWithParams:(id)arg1 completed:(CDUnknownBlockType)arg2;
+ (id)singleInstance;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SPayLogic *logic; // @synthesize logic=_logic;
@property(retain, nonatomic) UINavigationController *customNavigationController; // @synthesize customNavigationController=_customNavigationController;
- (void).cxx_destruct;
- (void)popViewControllerAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)containerViewForPayLogic:(id)arg1;
- (void)handleCompletionWithCode:(long long)arg1 message:(id)arg2 otherInfo:(id)arg3;
- (id)initForSingleton;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
