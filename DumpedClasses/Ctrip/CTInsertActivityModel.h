//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CTInsertActivityModel : NSObject
{
    NSArray *_LayoutItems;
    NSString *_LayoutType;
    unsigned long long _viewType;
    unsigned long long _height;
}

@property(nonatomic) unsigned long long height; // @synthesize height=_height;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) NSString *LayoutType; // @synthesize LayoutType=_LayoutType;
@property(retain, nonatomic) NSArray *LayoutItems; // @synthesize LayoutItems=_LayoutItems;
- (void).cxx_destruct;
- (id)init;

@end

