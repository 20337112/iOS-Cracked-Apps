//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CTTourDestinationMenuPopFoldTag : NSObject <NSCoding, NSCopying>
{
    _Bool _unfolded;
    NSString *_sectionTitle;
}

@property _Bool unfolded; // @synthesize unfolded=_unfolded;
@property(retain) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

