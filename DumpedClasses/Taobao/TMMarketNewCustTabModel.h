//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TMMarketNewCustTabModel : TBJSONModel
{
    _Bool _previewTab;
    unsigned long long _type;
    NSString *_header_1;
    NSString *_header_2;
    NSString *_header_3;
    NSString *_title;
    NSString *_couponShopName;
    NSString *_button1_label;
    NSString *_button1_link;
    NSString *_button2_label;
    NSString *_button2_link;
    NSString *_ruleUrl;
    NSString *_imgUrl;
    NSString *_itemUrl;
}

@property(copy, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(nonatomic) _Bool previewTab; // @synthesize previewTab=_previewTab;
@property(copy, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl=_ruleUrl;
@property(copy, nonatomic) NSString *button2_link; // @synthesize button2_link=_button2_link;
@property(copy, nonatomic) NSString *button2_label; // @synthesize button2_label=_button2_label;
@property(copy, nonatomic) NSString *button1_link; // @synthesize button1_link=_button1_link;
@property(copy, nonatomic) NSString *button1_label; // @synthesize button1_label=_button1_label;
@property(copy, nonatomic) NSString *couponShopName; // @synthesize couponShopName=_couponShopName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *header_3; // @synthesize header_3=_header_3;
@property(copy, nonatomic) NSString *header_2; // @synthesize header_2=_header_2;
@property(copy, nonatomic) NSString *header_1; // @synthesize header_1=_header_1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
