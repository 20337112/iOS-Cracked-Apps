//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CTTourIMSelfServiceParamModel : NSObject
{
    _Bool _hasProduct;
    long long _productLine;
    long long _productId;
    NSArray *_destinationIdList;
    long long _eventTypeCode;
    long long _scene;
    long long _platformId;
    long long _bizType;
    NSString *_comefrom;
    long long _channelId;
    NSString *_textTitle;
    NSString *_textDesc;
    NSString *_urlAvatar;
    NSString *_jumpUrl;
}

+ (id)getSelfServiceParamModel;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *urlAvatar; // @synthesize urlAvatar=_urlAvatar;
@property(copy, nonatomic) NSString *textDesc; // @synthesize textDesc=_textDesc;
@property(copy, nonatomic) NSString *textTitle; // @synthesize textTitle=_textTitle;
@property(nonatomic) _Bool hasProduct; // @synthesize hasProduct=_hasProduct;
@property(nonatomic) long long channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long platformId; // @synthesize platformId=_platformId;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
@property(nonatomic) long long eventTypeCode; // @synthesize eventTypeCode=_eventTypeCode;
@property(copy, nonatomic) NSArray *destinationIdList; // @synthesize destinationIdList=_destinationIdList;
@property(nonatomic) long long productId; // @synthesize productId=_productId;
@property(nonatomic) long long productLine; // @synthesize productLine=_productLine;
- (void).cxx_destruct;

@end

