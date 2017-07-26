//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class LocalReminderInformationModel, NSMutableArray, NSString, SimpleWeatherForecastInformationModel;

@interface UserTravelGroupInformationModel : CTBusinessBean
{
    _Bool _isShowNext;
    int _groupId;
    int _cityId;
    NSString *_groupImage;
    NSString *_cityName;
    long long _districtId;
    NSString *_districtName;
    NSString *_headText;
    NSString *_jumpUrl;
    SimpleWeatherForecastInformationModel *_weatherForecastModel;
    LocalReminderInformationModel *_localReminderModel;
    NSMutableArray *_cardList;
    NSString *_voiceGuideUrl;
}

@property(copy, nonatomic) NSString *voiceGuideUrl; // @synthesize voiceGuideUrl=_voiceGuideUrl;
@property(nonatomic) _Bool isShowNext; // @synthesize isShowNext=_isShowNext;
@property(retain, nonatomic) NSMutableArray *cardList; // @synthesize cardList=_cardList;
@property(retain, nonatomic) LocalReminderInformationModel *localReminderModel; // @synthesize localReminderModel=_localReminderModel;
@property(retain, nonatomic) SimpleWeatherForecastInformationModel *weatherForecastModel; // @synthesize weatherForecastModel=_weatherForecastModel;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *headText; // @synthesize headText=_headText;
@property(copy, nonatomic) NSString *districtName; // @synthesize districtName=_districtName;
@property(nonatomic) long long districtId; // @synthesize districtId=_districtId;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *groupImage; // @synthesize groupImage=_groupImage;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

