//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CTTourDestinationPoiItem : NSObject <NSCoding, NSCopying>
{
    NSString *_Name;
    NSString *_PoiType;
    NSString *_Poid;
}

@property(retain) NSString *Poid; // @synthesize Poid=_Poid;
@property(retain) NSString *PoiType; // @synthesize PoiType=_PoiType;
@property(retain) NSString *Name; // @synthesize Name=_Name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

