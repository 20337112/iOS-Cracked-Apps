//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FXBllKeyModel : NSObject
{
    _Bool _isCancel;
    NSString *_myKey;
    NSArray *_subModels;
    CDUnknownBlockType _errorBlock;
}

@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(nonatomic) _Bool isCancel; // @synthesize isCancel=_isCancel;
@property(retain, nonatomic) NSArray *subModels; // @synthesize subModels=_subModels;
@property(readonly, nonatomic) NSString *myKey; // @synthesize myKey=_myKey;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

