//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface Token : NSObject
{
    unsigned short _command;
    NSMutableArray *_values;
}

@property(nonatomic) unsigned short command; // @synthesize command=_command;
- (void).cxx_destruct;
- (long long)valence;
- (double)parameter:(long long)arg1;
- (void)addValue:(double)arg1;
- (id)initWithCommand:(unsigned short)arg1;

@end

