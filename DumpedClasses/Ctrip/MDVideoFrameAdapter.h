//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMDYUV420PProvider.h"
#import "MDVideoFrameCallback.h"

@class NSString;

@interface MDVideoFrameAdapter : NSObject <IMDYUV420PProvider, MDVideoFrameCallback>
{
    id <YUV420PTextureCallback> _callback;
}

@property(nonatomic) __weak id <YUV420PTextureCallback> callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)onProvideBuffer:(id)arg1;
- (void)onFrameAvailable:(struct MDVideoFrame *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

