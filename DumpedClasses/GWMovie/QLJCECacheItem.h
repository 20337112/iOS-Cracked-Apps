//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEPoster;

@interface QLJCECacheItem : JceObjectV2
{
    int jcev2_p_4_o_downloadRight;
    NSString *jcev2_p_0_o_lid;
    NSString *jcev2_p_1_o_cid;
    NSString *jcev2_p_2_o_vid;
    QLJCEPoster *jcev2_p_3_o_poster;
    long long jcev2_p_5_o_fileSize;
    NSString *jcev2_p_6_o_videoName;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_videoName, setter=setJce_videoName:) NSString *jcev2_p_6_o_videoName; // @synthesize jcev2_p_6_o_videoName;
@property(nonatomic, getter=jce_fileSize, setter=setJce_fileSize:) long long jcev2_p_5_o_fileSize; // @synthesize jcev2_p_5_o_fileSize;
@property(nonatomic, getter=jce_downloadRight, setter=setJce_downloadRight:) int jcev2_p_4_o_downloadRight; // @synthesize jcev2_p_4_o_downloadRight;
@property(retain, nonatomic, getter=jce_poster, setter=setJce_poster:) QLJCEPoster *jcev2_p_3_o_poster; // @synthesize jcev2_p_3_o_poster;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_2_o_vid; // @synthesize jcev2_p_2_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_1_o_cid; // @synthesize jcev2_p_1_o_cid;
@property(retain, nonatomic, getter=jce_lid, setter=setJce_lid:) NSString *jcev2_p_0_o_lid; // @synthesize jcev2_p_0_o_lid;
- (void)dealloc;
- (id)init;

@end

