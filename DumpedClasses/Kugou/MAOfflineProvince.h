//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAOfflineItem.h"

#import "NSCoding.h"

@class NSArray;

@interface MAOfflineProvince : MAOfflineItem <NSCoding>
{
    NSArray *_cities;
}

@property(retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)description;
- (id)descriptionDictionary;
- (void)executeInitializationWithDictionary:(id)arg1;
- (void)updateItemStatus;
- (id)citiesForDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
