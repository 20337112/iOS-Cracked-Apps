//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelFrontPageLabelRequest : CTBusinessBean
{
    int _flag;
    int _entranceType;
    NSString *_sourceTag;
}

@property(copy, nonatomic) NSString *sourceTag; // @synthesize sourceTag=_sourceTag;
@property(nonatomic) int entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) int flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
