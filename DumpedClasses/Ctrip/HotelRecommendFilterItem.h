//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelRecommendFilterItem : CTBusinessBean
{
    NSString *_filterId;
    NSString *_name;
    NSMutableArray *_childList;
}

@property(retain, nonatomic) NSMutableArray *childList; // @synthesize childList=_childList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
- (void).cxx_destruct;
- (id)traceValue:(_Bool)arg1;
- (id)getChild;
- (id)getLeafChild;
- (id)getPBAnnotationArray;
- (id)init;

@end

