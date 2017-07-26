//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class HotelCommentShareInfoViewModel, NSMutableArray, NSString;

@interface CTHotelCommentResultCacheBean : CTCacheBean
{
    _Bool _isUploadPic;
    _Bool _isFirstMemberOrderComm;
    _Bool _hasLotteryOver;
    _Bool _isFirstLottery;
    int _cityID;
    int _hotelDataType;
    int _hotelId;
    int _commentScore;
    NSString *_mOrderCommitMsg;
    NSString *_hotelName;
    long long _commentId;
    HotelCommentShareInfoViewModel *_shareInfoMap;
    long long _orderID;
    NSMutableArray *_imageTipList;
    NSString *_lottertUrlStr;
    NSString *_pointStr;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *pointStr; // @synthesize pointStr=_pointStr;
@property(nonatomic) _Bool isFirstLottery; // @synthesize isFirstLottery=_isFirstLottery;
@property(nonatomic) int commentScore; // @synthesize commentScore=_commentScore;
@property(nonatomic) _Bool hasLotteryOver; // @synthesize hasLotteryOver=_hasLotteryOver;
@property(nonatomic) _Bool isFirstMemberOrderComm; // @synthesize isFirstMemberOrderComm=_isFirstMemberOrderComm;
@property(copy, nonatomic) NSString *lottertUrlStr; // @synthesize lottertUrlStr=_lottertUrlStr;
@property(retain, nonatomic) NSMutableArray *imageTipList; // @synthesize imageTipList=_imageTipList;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(nonatomic) _Bool isUploadPic; // @synthesize isUploadPic=_isUploadPic;
@property(retain, nonatomic) HotelCommentShareInfoViewModel *shareInfoMap; // @synthesize shareInfoMap=_shareInfoMap;
@property(nonatomic) long long commentId; // @synthesize commentId=_commentId;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) int hotelId; // @synthesize hotelId=_hotelId;
@property(nonatomic) int hotelDataType; // @synthesize hotelDataType=_hotelDataType;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(copy, nonatomic) NSString *mOrderCommitMsg; // @synthesize mOrderCommitMsg=_mOrderCommitMsg;
- (void).cxx_destruct;
- (void)initCache;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

