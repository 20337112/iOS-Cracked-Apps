//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPBMessage.h"

@class NSString;

@interface UBTMobData_Header : CPBMessage
{
    unsigned int _type;
    unsigned int _code;
    unsigned long long _serialno;
    NSString *_vid;
    unsigned long long _sendts;
}

@property(nonatomic) unsigned long long sendts; // @synthesize sendts=_sendts;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(nonatomic) unsigned int code; // @synthesize code=_code;
@property(nonatomic) unsigned long long serialno; // @synthesize serialno=_serialno;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;

@end

