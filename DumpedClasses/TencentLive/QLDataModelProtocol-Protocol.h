//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString;

@protocol QLDataModelProtocol <NSObject>

@optional
+ (NSSet *)ignoredPropertiesWhenEncoding;
+ (NSString *)propertyNameFromParsedKey:(NSString *)arg1;
+ (NSString *)classNameForObjectInArrayProperty:(NSString *)arg1;
- (void)manualResetWithInfo:(NSDictionary *)arg1;
@end
