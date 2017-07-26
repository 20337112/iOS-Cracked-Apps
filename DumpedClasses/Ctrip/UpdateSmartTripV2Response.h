//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PreRecommendInformationModel;

@interface UpdateSmartTripV2Response : CTBusinessBean
{
    int _result;
    NSString *_errorMessage;
    NSString *_errorCode;
    NSString *_logId;
    NSString *_originalToken;
    NSString *_token;
    NSMutableArray *_groupList;
    NSMutableArray *_cardList;
    PreRecommendInformationModel *_preRecommendInfoModel;
    NSMutableArray *_conflictReminderTokenList;
    NSMutableArray *_clientCacheParameterList;
}

@property(retain, nonatomic) NSMutableArray *clientCacheParameterList; // @synthesize clientCacheParameterList=_clientCacheParameterList;
@property(retain, nonatomic) NSMutableArray *conflictReminderTokenList; // @synthesize conflictReminderTokenList=_conflictReminderTokenList;
@property(retain, nonatomic) PreRecommendInformationModel *preRecommendInfoModel; // @synthesize preRecommendInfoModel=_preRecommendInfoModel;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) NSMutableArray *groupList; // @synthesize groupList=_groupList;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *originalToken; // @synthesize originalToken=_originalToken;
@property(copy, nonatomic) NSString *logId; // @synthesize logId=_logId;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

