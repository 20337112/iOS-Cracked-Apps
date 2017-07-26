//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTCommConfig : NSObject
{
    id <CTCommConfigDelegate> _delegate;
}

+ (_Bool)isNeedEnc:(id)arg1;
+ (unsigned long long)requestDataEncodeWithRequestEntity:(id)arg1;
+ (double)scanTimeInterval;
+ (double)keepAliveTime;
+ (double)tcpConnectTimeOut;
+ (double)readTimeoutIntervalByTask:(id)arg1;
+ (id)configDelegate;
+ (id)initWithDelegate:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <CTCommConfigDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

@end

