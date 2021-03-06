//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponentDataProtocol-Protocol.h"
#import "NBComponentLifeCycleProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NBComponentContext, NSDictionary, NSString, UIView;
@protocol NBComponentMessageDelegate;

@protocol NBComponentProtocol <NSObject, NBComponentLifeCycleProtocol, NBComponentDataProtocol>
@property(copy, nonatomic) NSString *componentId;
@property(retain, nonatomic) NSDictionary *data;
@property(copy, nonatomic) NSString *type;
@property(retain, nonatomic) NBComponentContext *context;
@property(nonatomic) __weak id <NBComponentMessageDelegate> nbComponentMessageDelegate;
- (void)componentReceiveMessage:(NSString *)arg1 data:(NSDictionary *)arg2 callback:(void (^)(NSDictionary *))arg3;
- (UIView *)contentView;
@end

