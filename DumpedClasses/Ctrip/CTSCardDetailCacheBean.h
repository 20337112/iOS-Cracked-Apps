//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSString, ShortUrlInformationModel;

@interface CTSCardDetailCacheBean : CTCacheBean
{
    ShortUrlInformationModel *_urlsModel;
    NSString *_weChatUrl;
}

@property(retain, nonatomic) NSString *weChatUrl; // @synthesize weChatUrl=_weChatUrl;
@property(retain, nonatomic) ShortUrlInformationModel *urlsModel; // @synthesize urlsModel=_urlsModel;
- (void).cxx_destruct;
- (void)initCache;

@end

