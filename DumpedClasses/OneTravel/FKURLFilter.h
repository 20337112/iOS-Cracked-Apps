//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FKURLFilter : NSObject
{
    CDUnknownBlockType _urlFilter;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedFilter;
@property(copy) CDUnknownBlockType urlFilter; // @synthesize urlFilter=_urlFilter;
- (void).cxx_destruct;
- (void)setCacheURLFilter:(CDUnknownBlockType)arg1;
- (_Bool)isValidateCacheURL:(id)arg1;
- (id)init;

@end
