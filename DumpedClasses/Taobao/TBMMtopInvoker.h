//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MtopExtRequest;

@interface TBMMtopInvoker : NSObject
{
    MtopExtRequest *_request;
}

+ (id)getRpcInvoker;
@property(retain, nonatomic) MtopExtRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)isCancelled;
- (void)cancel;
- (void)ALBB_p_setupRequestParams:(id)arg1;
- (void)ALBB_p_initRequest:(id)arg1 apiVersion:(id)arg2;
- (void)doAsyncRequest:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)initInvoker;

@end
