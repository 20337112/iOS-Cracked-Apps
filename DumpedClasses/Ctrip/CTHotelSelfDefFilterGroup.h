//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelFilterMainGroup.h"

@class NSMutableArray;

@interface CTHotelSelfDefFilterGroup : CTHotelFilterMainGroup
{
    NSMutableArray *_selfDefFilterList;
}

@property(retain, nonatomic) NSMutableArray *selfDefFilterList; // @synthesize selfDefFilterList=_selfDefFilterList;
- (void).cxx_destruct;
- (_Bool)performOpen:(id)arg1;
- (void)openFilterGroup:(id)arg1;
- (id)initWithRoot:(id)arg1 type:(id)arg2;

@end

