//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEVipInfo : JceObjectV2
{
    int jcev2_p_3_o_iStatus;
    int jcev2_p_4_o_iVipLevel;
    int jcev2_p_5_o_iVipScore;
    int jcev2_p_7_o_iOpenDay;
    int jcev2_p_8_o_iType;
    int jcev2_p_11_o_iIsAnnual;
    int jcev2_p_14_o_iServiceId;
    NSString *jcev2_p_0_r_strUserId;
    long long jcev2_p_1_o_ldBeginTime;
    long long jcev2_p_2_o_ldEndTime;
    NSString *jcev2_p_6_o_strServiceType;
    NSString *jcev2_p_9_o_strAppid;
    long long jcev2_p_10_o_ldVipid;
    long long jcev2_p_12_o_ldAnualBeginTime;
    long long jcev2_p_13_o_ldAnualEndTime;
    NSString *jcev2_p_15_o_strLastgivedate;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_strLastgivedate, setter=setJce_strLastgivedate:) NSString *jcev2_p_15_o_strLastgivedate; // @synthesize jcev2_p_15_o_strLastgivedate;
@property(nonatomic, getter=jce_iServiceId, setter=setJce_iServiceId:) int jcev2_p_14_o_iServiceId; // @synthesize jcev2_p_14_o_iServiceId;
@property(nonatomic, getter=jce_ldAnualEndTime, setter=setJce_ldAnualEndTime:) long long jcev2_p_13_o_ldAnualEndTime; // @synthesize jcev2_p_13_o_ldAnualEndTime;
@property(nonatomic, getter=jce_ldAnualBeginTime, setter=setJce_ldAnualBeginTime:) long long jcev2_p_12_o_ldAnualBeginTime; // @synthesize jcev2_p_12_o_ldAnualBeginTime;
@property(nonatomic, getter=jce_iIsAnnual, setter=setJce_iIsAnnual:) int jcev2_p_11_o_iIsAnnual; // @synthesize jcev2_p_11_o_iIsAnnual;
@property(nonatomic, getter=jce_ldVipid, setter=setJce_ldVipid:) long long jcev2_p_10_o_ldVipid; // @synthesize jcev2_p_10_o_ldVipid;
@property(retain, nonatomic, getter=jce_strAppid, setter=setJce_strAppid:) NSString *jcev2_p_9_o_strAppid; // @synthesize jcev2_p_9_o_strAppid;
@property(nonatomic, getter=jce_iType, setter=setJce_iType:) int jcev2_p_8_o_iType; // @synthesize jcev2_p_8_o_iType;
@property(nonatomic, getter=jce_iOpenDay, setter=setJce_iOpenDay:) int jcev2_p_7_o_iOpenDay; // @synthesize jcev2_p_7_o_iOpenDay;
@property(retain, nonatomic, getter=jce_strServiceType, setter=setJce_strServiceType:) NSString *jcev2_p_6_o_strServiceType; // @synthesize jcev2_p_6_o_strServiceType;
@property(nonatomic, getter=jce_iVipScore, setter=setJce_iVipScore:) int jcev2_p_5_o_iVipScore; // @synthesize jcev2_p_5_o_iVipScore;
@property(nonatomic, getter=jce_iVipLevel, setter=setJce_iVipLevel:) int jcev2_p_4_o_iVipLevel; // @synthesize jcev2_p_4_o_iVipLevel;
@property(nonatomic, getter=jce_iStatus, setter=setJce_iStatus:) int jcev2_p_3_o_iStatus; // @synthesize jcev2_p_3_o_iStatus;
@property(nonatomic, getter=jce_ldEndTime, setter=setJce_ldEndTime:) long long jcev2_p_2_o_ldEndTime; // @synthesize jcev2_p_2_o_ldEndTime;
@property(nonatomic, getter=jce_ldBeginTime, setter=setJce_ldBeginTime:) long long jcev2_p_1_o_ldBeginTime; // @synthesize jcev2_p_1_o_ldBeginTime;
@property(retain, nonatomic, getter=jce_strUserId, setter=setJce_strUserId:) NSString *jcev2_p_0_r_strUserId; // @synthesize jcev2_p_0_r_strUserId;
- (void).cxx_destruct;
- (id)init;

@end

