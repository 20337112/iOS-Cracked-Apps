//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelTagDetailModel, NSString;

@interface FireflyDescription : CTBusinessBean
{
    HotelTagDetailModel *_tagDetail;
    NSString *_desp;
}

@property(copy, nonatomic) NSString *desp; // @synthesize desp=_desp;
@property(retain, nonatomic) HotelTagDetailModel *tagDetail; // @synthesize tagDetail=_tagDetail;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

