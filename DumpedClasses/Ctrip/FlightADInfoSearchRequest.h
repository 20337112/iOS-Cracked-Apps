//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightADStyleModel, FlightFIOCoordinateModel, NSMutableArray, NSString;

@interface FlightADInfoSearchRequest : CTBusinessBean
{
    int _serviceVersion;
    int _loginStatus;
    int _flag;
    int _pageType;
    NSString *_deviceToken;
    NSString *_uID;
    FlightFIOCoordinateModel *_positionInfoModel;
    NSMutableArray *_searchExtensionList;
    FlightADStyleModel *_styleModel;
    NSString *_fioData;
    NSString *_visitInfo;
}

@property(copy, nonatomic) NSString *visitInfo; // @synthesize visitInfo=_visitInfo;
@property(copy, nonatomic) NSString *fioData; // @synthesize fioData=_fioData;
@property(retain, nonatomic) FlightADStyleModel *styleModel; // @synthesize styleModel=_styleModel;
@property(retain, nonatomic) NSMutableArray *searchExtensionList; // @synthesize searchExtensionList=_searchExtensionList;
@property(retain, nonatomic) FlightFIOCoordinateModel *positionInfoModel; // @synthesize positionInfoModel=_positionInfoModel;
@property(nonatomic) int pageType; // @synthesize pageType=_pageType;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) int loginStatus; // @synthesize loginStatus=_loginStatus;
@property(copy, nonatomic) NSString *uID; // @synthesize uID=_uID;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion=_serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

