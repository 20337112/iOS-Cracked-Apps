//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEGetCaptionRequest : JceObjectV2
{
    NSString *jcev2_p_0_r_captionKey;
    long long jcev2_p_1_r_time;
    long long jcev2_p_2_r_totalTime;
    NSString *jcev2_p_3_r_cid;
    NSString *jcev2_p_4_r_vid;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_4_r_vid; // @synthesize jcev2_p_4_r_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_3_r_cid; // @synthesize jcev2_p_3_r_cid;
@property(nonatomic, getter=jce_totalTime, setter=setJce_totalTime:) long long jcev2_p_2_r_totalTime; // @synthesize jcev2_p_2_r_totalTime;
@property(nonatomic, getter=jce_time, setter=setJce_time:) long long jcev2_p_1_r_time; // @synthesize jcev2_p_1_r_time;
@property(retain, nonatomic, getter=jce_captionKey, setter=setJce_captionKey:) NSString *jcev2_p_0_r_captionKey; // @synthesize jcev2_p_0_r_captionKey;
- (void).cxx_destruct;
- (id)init;

@end
