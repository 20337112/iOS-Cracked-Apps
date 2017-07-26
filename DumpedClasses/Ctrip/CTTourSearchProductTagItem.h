//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface CTTourSearchProductTagItem : NSObject <NSCoding, NSCopying>
{
    NSString *_TagName;
    NSString *_Description;
    NSString *_Flag;
    long long _Type;
    long long _Id;
}

@property long long Id; // @synthesize Id=_Id;
@property long long Type; // @synthesize Type=_Type;
@property(retain) NSString *Flag; // @synthesize Flag=_Flag;
@property(retain) NSString *Description; // @synthesize Description=_Description;
@property(retain) NSString *TagName; // @synthesize TagName=_TagName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

