//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface CruiseTourInformationModel : CTBusinessBean
{
    NSString *_tourName;
    NSMutableArray *_poiList;
}

@property(retain, nonatomic) NSMutableArray *poiList; // @synthesize poiList=_poiList;
@property(copy, nonatomic) NSString *tourName; // @synthesize tourName=_tourName;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

