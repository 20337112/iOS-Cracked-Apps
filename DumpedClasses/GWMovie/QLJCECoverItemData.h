//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEPoster;

@interface QLJCECoverItemData : JceObjectV2
{
    NSString *jcev2_p_0_r_cid;
    QLJCEPoster *jcev2_p_1_r_poster;
    NSString *jcev2_p_2_o_date;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_date, setter=setJce_date:) NSString *jcev2_p_2_o_date; // @synthesize jcev2_p_2_o_date;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_1_r_poster; // @synthesize jcev2_p_1_r_poster;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_0_r_cid; // @synthesize jcev2_p_0_r_cid;
- (void)dealloc;
- (id)init;

@end

