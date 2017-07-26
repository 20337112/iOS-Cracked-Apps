//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableDictionary.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"

@interface BMLJKDictionary : NSMutableDictionary <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    unsigned long long count;
    unsigned long long capacity;
    unsigned long long mutations;
    struct BMLJKHashTableEntry *entry;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;

@end

