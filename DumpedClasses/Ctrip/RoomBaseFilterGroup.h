//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FilterGroup.h"

@class HotelRoomFilterRoot;

@interface RoomBaseFilterGroup : FilterGroup
{
    HotelRoomFilterRoot *_root;
}

@property(nonatomic) __weak HotelRoomFilterRoot *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (_Bool)canOpen;
- (void)bindFilterToRequest:(id)arg1;
- (_Bool)isMatch:(id)arg1;
- (int)getHotelType;
- (id)initWithRoot:(id)arg1;

@end

