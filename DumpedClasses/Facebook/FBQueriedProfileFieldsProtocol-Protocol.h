//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBMemCommerceMerchantSettings, FBMemContactRecommendationField, FBMemEventCategoryData, FBMemEventMembersConnection, FBMemEventTimeRange, FBMemFocusedPhoto, FBMemFriendsWhoLikeConnection, FBMemFriendsWhoVisitedConnection, FBMemGroup, FBMemGroupConfigurationsConnection, FBMemGroupMemberProfilesConnection, FBMemGroupPinnedStoriesConnection, FBMemIOSAppConfig, FBMemImage, FBMemInfoRequestFieldsConnection, FBMemLastActiveMessagesStatus, FBMemLocation, FBMemModelObject, FBMemMutualFriendsConnection, FBMemName, FBMemOpenGraphObject, FBMemPage, FBMemPageAdminInfo, FBMemPageLikersConnection, FBMemPageMenuInfo, FBMemPageProfilePictureOverlaysConnection, FBMemPhoto, FBMemPhotosTakenOfConnection, FBMemProductCatalog, FBMemProfileDiscoveryIntent, FBMemProfileIntroCard, FBMemProfileOverlayCategory, FBMemProfileVideo, FBMemProfileWizardRefresher, FBMemStreetAddress, FBMemSubscribersConnection, FBMemTaggedMediaOfUserMediaSet, FBMemTextWithEntities, FBMemTimelineContextListItemsConnection, FBMemTrendingTopicData, FBMemWorkCommunitiesConnection, NSArray, NSDate, NSNumber, NSString;
@protocol FBQueriedPlaceFieldsProtocol;

@protocol FBQueriedProfileFieldsProtocol
- (FBMemWorkCommunitiesConnection *)workCommunities;
- (FBMemImage *)wide_topic_image;
- (FBMemImage *)weatherSettingProfilePicture64;
- (FBMemTextWithEntities *)visibilitySentence;
- (NSString *)visibility;
- (NSString *)viewerWatchStatus;
- (NSArray *)viewerTimelineCollectionsSupported;
- (NSArray *)viewerTimelineCollectionsContaining;
- (NSString *)viewerSavedState;
- (FBMemContactRecommendationField *)viewerRecommendation;
- (NSArray *)viewerProfilePermissions;
- (NSString *)viewerPostStatus;
- (NSString *)viewerJoinState;
- (NSString *)viewerGuestStatus;
- (_Bool)viewerCanSeeProfileInsightsValue;
- (NSNumber *)viewerCanSeeProfileInsights;
- (NSString *)viewerAdminType;
- (_Bool)videoChannelIsViewerFollowingValue;
- (NSNumber *)videoChannelIsViewerFollowing;
- (_Bool)videoChannelHasViewerSubscribedValue;
- (NSNumber *)videoChannelHasViewerSubscribed;
- (_Bool)videoChannelCanViewerSubscribeValue;
- (NSNumber *)videoChannelCanViewerSubscribe;
- (_Bool)videoChannelCanViewerFollowValue;
- (NSNumber *)videoChannelCanViewerFollow;
- (NSString *)verificationStatus;
- (NSString *)username;
- (NSString *)user_fbid;
- (NSString *)urlString;
- (NSString *)uniqueKeyword;
- (NSString *)trendingTopicName;
- (FBMemTrendingTopicData *)trendingTopicData;
- (FBMemImage *)topicImage;
- (FBMemImage *)topicCoverImage;
- (long long)topicActorsCountValue;
- (NSNumber *)topicActorsCount;
- (FBMemOpenGraphObject *)topSharedObject;
- (NSString *)topCategoryName;
- (NSString *)timeRangeSentence;
- (FBMemEventTimeRange *)timeRange;
- (FBMemTaggedMediaOfUserMediaSet *)taggedMediaset;
- (NSString *)tag;
- (FBMemSubscribersConnection *)subscribers;
- (NSString *)subscribeStatus;
- (FBMemName *)structuredName;
- (NSString *)startTimeSentence;
- (FBMemImage *)squareLogo;
- (FBMemImage *)sportsTeamProfilePicture64;
- (FBMemImage *)sportsTeamLogo64;
- (FBMemTextWithEntities *)socialContextForNonLikingViewer;
- (FBMemTextWithEntities *)socialContext;
- (NSString *)shortName;
- (NSArray *)shortCategoryNames;
- (FBMemTimelineContextListItemsConnection *)selfItem;
- (NSString *)secondarySubscribeStatus;
- (NSString *)relatedArticleTitle;
- (NSArray *)redirectionInfo;
- (double)rankValue;
- (NSNumber *)rank;
- (FBMemProfileWizardRefresher *)profileWizardRefresher;
- (FBMemProfileVideo *)profileVideo;
- (FBMemPageProfilePictureOverlaysConnection *)profilePictureOverlays;
- (_Bool)profilePictureIsSilhouetteValue;
- (NSNumber *)profilePictureIsSilhouette;
- (NSDate *)profilePictureExpirationTime;
- (FBMemImage *)profilePicture94;
- (FBMemImage *)profilePicture74;
- (FBMemImage *)profilePicture64;
- (FBMemImage *)profilePicture56;
- (FBMemImage *)profilePicture52;
- (FBMemImage *)profilePicture50;
- (FBMemImage *)profilePicture34;
- (FBMemImage *)profilePicture320;
- (FBMemImage *)profilePicture32;
- (FBMemImage *)profilePicture30;
- (FBMemImage *)profilePicture28;
- (FBMemImage *)profilePicture180;
- (FBMemImage *)profilePicture130;
- (FBMemImage *)profilePicture;
- (FBMemPhoto *)profilePhoto;
- (FBMemProfileOverlayCategory *)profileOverlayCategory;
- (FBMemProfileIntroCard *)profileIntroCard;
- (_Bool)profileDiscoveryIntentsHiddenValue;
- (NSNumber *)profileDiscoveryIntentsHidden;
- (FBMemProfileDiscoveryIntent *)profileDiscoveryIntent;
- (FBMemProductCatalog *)productCatalog;
- (NSString *)placeType;
- (FBMemPhotosTakenOfConnection *)photosTakenOf;
- (FBMemInfoRequestFieldsConnection *)phoneInfoRequestFields;
- (FBMemGroup *)parentGroup;
- (FBMemPageLikersConnection *)pageLikers;
- (FBMemTextWithEntities *)pageDescription;
- (FBMemPage *)page;
- (_Bool)notificationStatusValue;
- (NSNumber *)notificationStatus;
- (NSString *)nativeURLString;
- (NSArray *)nameSearchTokens;
- (NSString *)name;
- (FBMemTimelineContextListItemsConnection *)mutualityItems;
- (FBMemMutualFriendsConnection *)mutualFriends;
- (FBMemOpenGraphObject *)musicObject;
- (FBMemPageMenuInfo *)menuInfo;
- (FBMemTextWithEntities *)longDescription;
- (FBMemLocation *)location;
- (FBMemProfileVideo *)localProfileVideo;
- (long long)lastFriendingActionValue;
- (NSNumber *)lastFriendingAction;
- (FBMemLastActiveMessagesStatus *)lastActiveMessagesStatus;
- (_Bool)isWorkUserValue;
- (NSNumber *)isWorkUser;
- (_Bool)isViewerFriendValue;
- (NSNumber *)isViewerFriend;
- (_Bool)isViewerCoworkerValue;
- (NSNumber *)isViewerCoworker;
- (_Bool)isVerifiedValue;
- (NSNumber *)isVerified;
- (_Bool)isServiceItemValue;
- (NSNumber *)isServiceItem;
- (_Bool)isPysfBlacklistedValue;
- (NSNumber *)isPysfBlacklisted;
- (_Bool)isPymlBlacklistedValue;
- (NSNumber *)isPymlBlacklisted;
- (_Bool)isProfileEligibleForLiveWithValue;
- (NSNumber *)isProfileEligibleForLiveWith;
- (_Bool)isMultiCompanyGroupValue;
- (NSNumber *)isMultiCompanyGroup;
- (_Bool)isMinorValue;
- (NSNumber *)isMinor;
- (_Bool)isMemorializedValue;
- (NSNumber *)isMemorialized;
- (_Bool)isForsaleGroupValue;
- (NSNumber *)isForsaleGroup;
- (_Bool)isFollowedByEveryoneValue;
- (NSNumber *)isFollowedByEveryone;
- (_Bool)isConnectWithFacebookBlacklistedValue;
- (NSNumber *)isConnectWithFacebookBlacklisted;
- (NSArray *)iOSURLStrings;
- (NSString *)iOSAppStoreURLString;
- (FBMemIOSAppConfig *)iOSAppConfig;
- (NSArray *)hours;
- (_Bool)hasEnabledRankedCommentsValue;
- (NSNumber *)hasEnabledRankedComments;
- (FBMemGroupPinnedStoriesConnection *)groupPinnedStories;
- (FBMemGroupMemberProfilesConnection *)groupMemberProfiles;
- (FBMemGroupConfigurationsConnection *)groupConfigs;
- (NSString *)graphQLID;
- (NSString *)gender;
- (NSString *)friendshipStatus;
- (FBMemFriendsWhoVisitedConnection *)friendsWhoVisited;
- (FBMemFriendsWhoLikeConnection *)friendsWhoLike;
- (_Bool)followerTargetingEnabledValue;
- (NSNumber *)followerTargetingEnabled;
- (FBMemImage *)feedAwesomizerProfilePicture;
- (NSString *)eventsCalendarSubscriptionStatus;
- (long long)eventsCalendarSubscriberCountValue;
- (NSNumber *)eventsCalendarSubscriberCount;
- (_Bool)eventsCalendarCanViewerSubscribeValue;
- (NSNumber *)eventsCalendarCanViewerSubscribe;
- (FBMemModelObject<FBQueriedPlaceFieldsProtocol> *)eventPlace;
- (FBMemEventMembersConnection *)eventMembers;
- (NSString *)eventKind;
- (FBMemTextWithEntities *)eventDescription;
- (FBMemEventCategoryData *)eventCategoryInfo;
- (FBMemTextWithEntities *)employerContext;
- (_Bool)doesViewerLikeValue;
- (NSNumber *)doesViewerLike;
- (NSString *)displayName;
- (_Bool)disableProfilePhotoExpansionValue;
- (NSNumber *)disableProfilePhotoExpansion;
- (NSString *)descriptionText;
- (FBMemPage *)currentCity;
- (FBMemFocusedPhoto *)coverPhoto;
- (NSString *)connectionStyle;
- (double)communicationRankValue;
- (NSNumber *)communicationRank;
- (FBMemCommerceMerchantSettings *)commerceMerchantSettings;
- (NSString *)categoryType;
- (NSArray *)categoryNames;
- (_Bool)canViewerReportValue;
- (NSNumber *)canViewerReport;
- (_Bool)canViewerPostPhotoToTimelineValue;
- (NSNumber *)canViewerPostPhotoToTimeline;
- (_Bool)canViewerPostValue;
- (NSNumber *)canViewerPost;
- (_Bool)canViewerPokeValue;
- (NSNumber *)canViewerPoke;
- (_Bool)canViewerPinPostValue;
- (NSNumber *)canViewerPinPost;
- (_Bool)canViewerMessageValue;
- (NSNumber *)canViewerMessage;
- (_Bool)canViewerLikeValue;
- (NSNumber *)canViewerLike;
- (_Bool)canViewerChangeGuestStatusValue;
- (NSNumber *)canViewerChangeGuestStatus;
- (_Bool)canViewerBlockValue;
- (NSNumber *)canViewerBlock;
- (_Bool)canViewerActAsMemorialContactValue;
- (NSNumber *)canViewerActAsMemorialContact;
- (FBMemTextWithEntities *)bestDescription;
- (NSString *)alternateName;
- (NSArray *)allPhones;
- (FBMemPageAdminInfo *)adminInfo;
- (FBMemStreetAddress *)address;
- (FBMemTextWithEntities *)about;
- (NSString *)_Typename;
@end

