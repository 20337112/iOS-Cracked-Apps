//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface OtherUserModifyResponse : CTBusinessBean
{
    _Bool result;
    NSString *resultMessage;
    int resultCode;
}

@property(nonatomic) int resultCode; // @synthesize resultCode;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage;
@property(nonatomic) _Bool result; // @synthesize result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

