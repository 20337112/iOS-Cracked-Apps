//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface SelectedTicketsInformationModel : CTBusinessBean
{
    NSString *_tag;
    NSMutableArray *_ticketList;
}

@property(retain, nonatomic) NSMutableArray *ticketList; // @synthesize ticketList=_ticketList;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

