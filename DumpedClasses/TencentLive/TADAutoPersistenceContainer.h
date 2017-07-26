//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<NSCoding>;

@interface TADAutoPersistenceContainer : NSObject
{
    NSObject<NSCoding> *_innerContainer;
}

@property(retain, nonatomic) NSObject<NSCoding> *innerContainer; // @synthesize innerContainer=_innerContainer;
- (void).cxx_destruct;
- (void)reset;
- (id)filenameForPersistence;
- (id)getContainer;
- (void)appWillResignActiveNotification:(id)arg1;
- (void)recoverFromDisk;
- (void)configPersistenceParams;
@property(readonly, nonatomic) NSObject<NSCoding> *container;
- (void)dealloc;
- (id)init;

@end
