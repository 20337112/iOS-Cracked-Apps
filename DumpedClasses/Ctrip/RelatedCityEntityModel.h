//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface RelatedCityEntityModel : CTBusinessBean
{
    int _subListType;
    NSString *_pOIAddressInfo;
    NSString *_descriptionIndex;
    NSString *_placeHolder;
}

@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
@property(copy, nonatomic) NSString *descriptionIndex; // @synthesize descriptionIndex=_descriptionIndex;
@property(copy, nonatomic) NSString *pOIAddressInfo; // @synthesize pOIAddressInfo=_pOIAddressInfo;
@property(nonatomic) int subListType; // @synthesize subListType=_subListType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

