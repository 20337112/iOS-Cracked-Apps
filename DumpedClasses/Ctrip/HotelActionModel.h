//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class HotelTagInformationModel, NSString;

@interface HotelActionModel : CTBusinessBean
{
    _Bool _disabled;
    int _actionType;
    NSString *_actionName;
    HotelTagInformationModel *_actionDesc;
    NSString *_args;
    NSString *_actionLog;
}

@property(copy, nonatomic) NSString *actionLog; // @synthesize actionLog=_actionLog;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(copy, nonatomic) NSString *args; // @synthesize args=_args;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) HotelTagInformationModel *actionDesc; // @synthesize actionDesc=_actionDesc;
@property(copy, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

