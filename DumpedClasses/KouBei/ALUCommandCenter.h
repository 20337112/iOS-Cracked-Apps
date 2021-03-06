//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ALUCommandCenter : NSObject
{
    NSMutableDictionary *_commandsMapper;
    NSMutableDictionary *_commandsToRun;
    NSMutableArray *_commandsArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *commandsArray; // @synthesize commandsArray=_commandsArray;
@property(retain, nonatomic) NSMutableDictionary *commandsToRun; // @synthesize commandsToRun=_commandsToRun;
@property(retain, nonatomic) NSMutableDictionary *commandsMapper; // @synthesize commandsMapper=_commandsMapper;
- (void).cxx_destruct;
- (void)executeCommand:(id)arg1 onTargetClassName:(id)arg2;
- (void)registCommandType:(long long)arg1 onTargetClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)runOnScope:(long long)arg1 onTargetClassName:(id)arg2;
- (void)setupCommandsForTargetClassName:(id)arg1;
- (void)addCommand:(id)arg1;
- (id)init;

@end

