//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightListIntlNoteInformationModel : CTBusinessBean
{
    int noteType;
    NSString *noteTitle;
    NSString *noteContent;
}

@property(copy, nonatomic) NSString *noteContent; // @synthesize noteContent;
@property(copy, nonatomic) NSString *noteTitle; // @synthesize noteTitle;
@property(nonatomic) int noteType; // @synthesize noteType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

