//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSMutableArray, NSString;

@interface CTFioPolicyInfo : CTJSONModel
{
    NSString *_PolicyID;
    NSMutableArray *_Grades;
    NSMutableArray *_PromotionList;
}

@property(retain, nonatomic) NSMutableArray *PromotionList; // @synthesize PromotionList=_PromotionList;
@property(retain, nonatomic) NSMutableArray *Grades; // @synthesize Grades=_Grades;
@property(copy, nonatomic) NSString *PolicyID; // @synthesize PolicyID=_PolicyID;
- (void).cxx_destruct;
- (id)init;

@end

