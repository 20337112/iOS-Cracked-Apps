//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray;

@interface FlightInlandDetailTagListInformationModel : CTBusinessBean
{
    int tagSwitch;
    int tagIndex;
    int tagType;
    NSMutableArray *tagList;
}

@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList;
@property(nonatomic) int tagType; // @synthesize tagType;
@property(nonatomic) int tagIndex; // @synthesize tagIndex;
@property(nonatomic) int tagSwitch; // @synthesize tagSwitch;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

