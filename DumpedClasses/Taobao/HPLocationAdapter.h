//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HPLocationProtocol.h"

@class NSString;

@interface HPLocationAdapter : NSObject <HPLocationProtocol>
{
    id <HPLocationProtocol> _locationService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <HPLocationProtocol> locationService; // @synthesize locationService=_locationService;
- (void).cxx_destruct;
- (void)getLocation:(id)arg1 view:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

