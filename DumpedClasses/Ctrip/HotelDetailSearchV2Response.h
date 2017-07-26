//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class AuctionInformationModel, ChineseHotelInformationModel, FeatureHotelAttributeModel, GHILeagueInformationModel, HotelActiveInformationModel, HotelBasicInfoEntityModel, HotelCommentInfoEntityModel, HotelImageSellerShowModel, HotelImageUploadSwitchInfomationModel, HotelOwnerInforamtionModel, HotelStaticInfoEntityModel, NSMutableArray, NSString;

@interface HotelDetailSearchV2Response : CTBusinessBean
{
    int _result;
    NSString *_resultMessage;
    HotelBasicInfoEntityModel *_hotelBasicInfoModel;
    HotelOwnerInforamtionModel *_hotelOwnerInfoModel;
    FeatureHotelAttributeModel *_featureHotelInfoModel;
    HotelActiveInformationModel *_hotelActiveInfoModel;
    HotelStaticInfoEntityModel *_hotelStaticInfoModel;
    HotelCommentInfoEntityModel *_hotelCommentInfoModel;
    NSString *_cityName;
    NSString *_aroundEnvironment;
    NSString *_breakfastInfo;
    NSMutableArray *_hotelPlaceList;
    NSMutableArray *_acceptableCCardList;
    NSMutableArray *_imageCategoryList;
    NSMutableArray *_hotelImageList;
    NSMutableArray *_warningInfoList;
    NSMutableArray *_hotelServiceList;
    NSMutableArray *_hotelPoliciesList;
    AuctionInformationModel *_auctionBoardModel;
    GHILeagueInformationModel *_gHILeagueInfoModel;
    ChineseHotelInformationModel *_chineseHotelInfoModel;
    NSMutableArray *_displaySettingsList;
    NSString *_hotelVendorCode;
    HotelImageUploadSwitchInfomationModel *_hotelImageUploadSwitchInfoModel;
    NSMutableArray *_nearbyList;
    NSString *_hotelDetailUrl;
    NSMutableArray *_hotelFeatureTagList;
    NSString *_nearLandmark;
    NSString *_shareUrl;
    HotelImageSellerShowModel *_hotelImageSellerShowModel;
    NSMutableArray *_hotelShareFeatureList;
    NSString *_recentBookingInfo;
    NSMutableArray *_hotelOutlineImageList;
}

@property(retain, nonatomic) NSMutableArray *hotelOutlineImageList; // @synthesize hotelOutlineImageList=_hotelOutlineImageList;
@property(retain, nonatomic) NSString *recentBookingInfo; // @synthesize recentBookingInfo=_recentBookingInfo;
@property(retain, nonatomic) NSMutableArray *hotelShareFeatureList; // @synthesize hotelShareFeatureList=_hotelShareFeatureList;
@property(retain, nonatomic) HotelImageSellerShowModel *hotelImageSellerShowModel; // @synthesize hotelImageSellerShowModel=_hotelImageSellerShowModel;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *nearLandmark; // @synthesize nearLandmark=_nearLandmark;
@property(retain, nonatomic) NSMutableArray *hotelFeatureTagList; // @synthesize hotelFeatureTagList=_hotelFeatureTagList;
@property(copy, nonatomic) NSString *hotelDetailUrl; // @synthesize hotelDetailUrl=_hotelDetailUrl;
@property(retain, nonatomic) NSMutableArray *nearbyList; // @synthesize nearbyList=_nearbyList;
@property(retain, nonatomic) HotelImageUploadSwitchInfomationModel *hotelImageUploadSwitchInfoModel; // @synthesize hotelImageUploadSwitchInfoModel=_hotelImageUploadSwitchInfoModel;
@property(copy, nonatomic) NSString *hotelVendorCode; // @synthesize hotelVendorCode=_hotelVendorCode;
@property(retain, nonatomic) NSMutableArray *displaySettingsList; // @synthesize displaySettingsList=_displaySettingsList;
@property(retain, nonatomic) ChineseHotelInformationModel *chineseHotelInfoModel; // @synthesize chineseHotelInfoModel=_chineseHotelInfoModel;
@property(retain, nonatomic) GHILeagueInformationModel *gHILeagueInfoModel; // @synthesize gHILeagueInfoModel=_gHILeagueInfoModel;
@property(retain, nonatomic) AuctionInformationModel *auctionBoardModel; // @synthesize auctionBoardModel=_auctionBoardModel;
@property(retain, nonatomic) NSMutableArray *hotelPoliciesList; // @synthesize hotelPoliciesList=_hotelPoliciesList;
@property(retain, nonatomic) NSMutableArray *hotelServiceList; // @synthesize hotelServiceList=_hotelServiceList;
@property(retain, nonatomic) NSMutableArray *warningInfoList; // @synthesize warningInfoList=_warningInfoList;
@property(retain, nonatomic) NSMutableArray *hotelImageList; // @synthesize hotelImageList=_hotelImageList;
@property(retain, nonatomic) NSMutableArray *imageCategoryList; // @synthesize imageCategoryList=_imageCategoryList;
@property(retain, nonatomic) NSMutableArray *acceptableCCardList; // @synthesize acceptableCCardList=_acceptableCCardList;
@property(retain, nonatomic) NSMutableArray *hotelPlaceList; // @synthesize hotelPlaceList=_hotelPlaceList;
@property(copy, nonatomic) NSString *breakfastInfo; // @synthesize breakfastInfo=_breakfastInfo;
@property(copy, nonatomic) NSString *aroundEnvironment; // @synthesize aroundEnvironment=_aroundEnvironment;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) HotelCommentInfoEntityModel *hotelCommentInfoModel; // @synthesize hotelCommentInfoModel=_hotelCommentInfoModel;
@property(retain, nonatomic) HotelStaticInfoEntityModel *hotelStaticInfoModel; // @synthesize hotelStaticInfoModel=_hotelStaticInfoModel;
@property(retain, nonatomic) HotelActiveInformationModel *hotelActiveInfoModel; // @synthesize hotelActiveInfoModel=_hotelActiveInfoModel;
@property(retain, nonatomic) FeatureHotelAttributeModel *featureHotelInfoModel; // @synthesize featureHotelInfoModel=_featureHotelInfoModel;
@property(retain, nonatomic) HotelOwnerInforamtionModel *hotelOwnerInfoModel; // @synthesize hotelOwnerInfoModel=_hotelOwnerInfoModel;
@property(retain, nonatomic) HotelBasicInfoEntityModel *hotelBasicInfoModel; // @synthesize hotelBasicInfoModel=_hotelBasicInfoModel;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

