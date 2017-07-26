//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class ActivityInformationModel, CommonTravelNotesInformationModel, DiscoveredHotelInformationModel, HHTravelInformationModel, MarketingActivitiesInformationModel, MoreSpecialPriceFlightInformationModel, MoreSpecialPriceHotelInformationModel, MoreSpecialPriceInnInformationModel, NSString, PgcInformationModel, PhotosTravelNotesInformationModel, SelectedTicketsInformationModel, SimpleBrowseInformationModel, SmilinInformationModel, SpecialInnInformationModel, SpecialPriceFlightInformationModel, TicketTopicInformationModel, TravelNewsInformationModel, WeekendAlbumInformationModel;

@interface DiscoveryItemInformationModel : CTBusinessBean
{
    int _groupId;
    int _moduleType;
    int _dependentSource;
    NSString *_discoveryId;
    NSString *_moduleName;
    NSString *_actionCode;
    NSString *_bIActionValue;
    CommonTravelNotesInformationModel *_bestTravelNotesModel;
    CommonTravelNotesInformationModel *_topTravelNotesModel;
    CommonTravelNotesInformationModel *_classicTravelNotesModel;
    CommonTravelNotesInformationModel *_goodTravelNotesModel;
    CommonTravelNotesInformationModel *_usefulTravelNotesModel;
    PhotosTravelNotesInformationModel *_photosTravelNotesModel;
    TravelNewsInformationModel *_travelNewsModel;
    WeekendAlbumInformationModel *_weekendHotelAlbumModel;
    WeekendAlbumInformationModel *_weekendDiyAlbumModel;
    WeekendAlbumInformationModel *_weekendMixedAlbumModel;
    TicketTopicInformationModel *_ticketTopicModel;
    SpecialPriceFlightInformationModel *_specialPriceFlightModel;
    DiscoveredHotelInformationModel *_specialPriceHotelModel;
    SpecialInnInformationModel *_specialInnModel;
    DiscoveredHotelInformationModel *_hotelModel;
    SelectedTicketsInformationModel *_selectedTicketsModel;
    MoreSpecialPriceFlightInformationModel *_moreSpecialPriceFlightModel;
    MoreSpecialPriceHotelInformationModel *_moreSpecialPriceHotelModel;
    MoreSpecialPriceInnInformationModel *_moreSpecialInnHotelModel;
    MarketingActivitiesInformationModel *_marketingActivitiesModel;
    SmilinInformationModel *_smilinModel;
    HHTravelInformationModel *_hHTravelModel;
    SimpleBrowseInformationModel *_latestBrowseModel;
    PgcInformationModel *_travelPGCModel;
    PgcInformationModel *_foodPGCModel;
    ActivityInformationModel *_activityModel;
}

@property(retain, nonatomic) ActivityInformationModel *activityModel; // @synthesize activityModel=_activityModel;
@property(retain, nonatomic) PgcInformationModel *foodPGCModel; // @synthesize foodPGCModel=_foodPGCModel;
@property(retain, nonatomic) PgcInformationModel *travelPGCModel; // @synthesize travelPGCModel=_travelPGCModel;
@property(retain, nonatomic) SimpleBrowseInformationModel *latestBrowseModel; // @synthesize latestBrowseModel=_latestBrowseModel;
@property(retain, nonatomic) HHTravelInformationModel *hHTravelModel; // @synthesize hHTravelModel=_hHTravelModel;
@property(retain, nonatomic) SmilinInformationModel *smilinModel; // @synthesize smilinModel=_smilinModel;
@property(retain, nonatomic) MarketingActivitiesInformationModel *marketingActivitiesModel; // @synthesize marketingActivitiesModel=_marketingActivitiesModel;
@property(retain, nonatomic) MoreSpecialPriceInnInformationModel *moreSpecialInnHotelModel; // @synthesize moreSpecialInnHotelModel=_moreSpecialInnHotelModel;
@property(retain, nonatomic) MoreSpecialPriceHotelInformationModel *moreSpecialPriceHotelModel; // @synthesize moreSpecialPriceHotelModel=_moreSpecialPriceHotelModel;
@property(retain, nonatomic) MoreSpecialPriceFlightInformationModel *moreSpecialPriceFlightModel; // @synthesize moreSpecialPriceFlightModel=_moreSpecialPriceFlightModel;
@property(retain, nonatomic) SelectedTicketsInformationModel *selectedTicketsModel; // @synthesize selectedTicketsModel=_selectedTicketsModel;
@property(retain, nonatomic) DiscoveredHotelInformationModel *hotelModel; // @synthesize hotelModel=_hotelModel;
@property(retain, nonatomic) SpecialInnInformationModel *specialInnModel; // @synthesize specialInnModel=_specialInnModel;
@property(retain, nonatomic) DiscoveredHotelInformationModel *specialPriceHotelModel; // @synthesize specialPriceHotelModel=_specialPriceHotelModel;
@property(retain, nonatomic) SpecialPriceFlightInformationModel *specialPriceFlightModel; // @synthesize specialPriceFlightModel=_specialPriceFlightModel;
@property(retain, nonatomic) TicketTopicInformationModel *ticketTopicModel; // @synthesize ticketTopicModel=_ticketTopicModel;
@property(retain, nonatomic) WeekendAlbumInformationModel *weekendMixedAlbumModel; // @synthesize weekendMixedAlbumModel=_weekendMixedAlbumModel;
@property(retain, nonatomic) WeekendAlbumInformationModel *weekendDiyAlbumModel; // @synthesize weekendDiyAlbumModel=_weekendDiyAlbumModel;
@property(retain, nonatomic) WeekendAlbumInformationModel *weekendHotelAlbumModel; // @synthesize weekendHotelAlbumModel=_weekendHotelAlbumModel;
@property(retain, nonatomic) TravelNewsInformationModel *travelNewsModel; // @synthesize travelNewsModel=_travelNewsModel;
@property(retain, nonatomic) PhotosTravelNotesInformationModel *photosTravelNotesModel; // @synthesize photosTravelNotesModel=_photosTravelNotesModel;
@property(retain, nonatomic) CommonTravelNotesInformationModel *usefulTravelNotesModel; // @synthesize usefulTravelNotesModel=_usefulTravelNotesModel;
@property(retain, nonatomic) CommonTravelNotesInformationModel *goodTravelNotesModel; // @synthesize goodTravelNotesModel=_goodTravelNotesModel;
@property(retain, nonatomic) CommonTravelNotesInformationModel *classicTravelNotesModel; // @synthesize classicTravelNotesModel=_classicTravelNotesModel;
@property(retain, nonatomic) CommonTravelNotesInformationModel *topTravelNotesModel; // @synthesize topTravelNotesModel=_topTravelNotesModel;
@property(retain, nonatomic) CommonTravelNotesInformationModel *bestTravelNotesModel; // @synthesize bestTravelNotesModel=_bestTravelNotesModel;
@property(copy, nonatomic) NSString *bIActionValue; // @synthesize bIActionValue=_bIActionValue;
@property(copy, nonatomic) NSString *actionCode; // @synthesize actionCode=_actionCode;
@property(nonatomic) int dependentSource; // @synthesize dependentSource=_dependentSource;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) int moduleType; // @synthesize moduleType=_moduleType;
@property(copy, nonatomic) NSString *discoveryId; // @synthesize discoveryId=_discoveryId;
@property(nonatomic) int groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

