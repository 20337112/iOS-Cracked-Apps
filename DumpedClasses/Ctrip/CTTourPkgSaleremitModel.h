//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTTourPkgSaleremitModel : CTJSONModel
{
    NSString *_appLink;
    NSString *_appUrl;
    NSString *_sequence;
    NSString *_text;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
@property(copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(copy, nonatomic) NSString *appLink; // @synthesize appLink=_appLink;
- (void).cxx_destruct;

@end

