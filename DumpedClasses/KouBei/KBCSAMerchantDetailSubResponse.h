//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCSAResponseData.h"

@class NSArray, NSString;

@interface KBCSAMerchantDetailSubResponse : KBCSAResponseData
{
    NSArray *_blockList;
    NSString *_templateType;
}

+ (Class)blockListElementClass;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;
- (void).cxx_destruct;

@end

