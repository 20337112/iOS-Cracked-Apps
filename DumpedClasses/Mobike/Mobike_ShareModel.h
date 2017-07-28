//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

@class NSString, UIImage;

@interface Mobike_ShareModel : Mobike_Model
{
    NSString *_shareTitle;
    UIImage *_shareImage;
    NSString *_shareImageUrl;
    NSString *_shareContent;
    NSString *_shareTargetUrl;
}

@property(copy, nonatomic) NSString *shareTargetUrl; // @synthesize shareTargetUrl=_shareTargetUrl;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *shareImageUrl; // @synthesize shareImageUrl=_shareImageUrl;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
- (void).cxx_destruct;

@end
