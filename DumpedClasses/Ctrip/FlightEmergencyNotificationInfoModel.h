//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightEmergencyNotificationInfoModel : CTBusinessBean
{
    int pageId;
    int notificationLevel;
    int notificationType;
    long long flag;
    NSString *notificationId;
    NSString *iconUrl;
    NSString *title;
    NSString *content;
    NSString *buttonText;
}

@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(copy, nonatomic) NSString *notificationId; // @synthesize notificationId;
@property(nonatomic) long long flag; // @synthesize flag;
@property(nonatomic) int notificationType; // @synthesize notificationType;
@property(nonatomic) int notificationLevel; // @synthesize notificationLevel;
@property(nonatomic) int pageId; // @synthesize pageId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

