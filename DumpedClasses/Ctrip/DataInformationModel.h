//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface DataInformationModel : CTBusinessBean
{
    NSString *key;
    NSString *relationID;
    int operationType;
    int language;
    NSString *version;
    NSString *content;
    NSString *subContent;
    NSString *extend;
    int dataType;
    int subDataType;
    int sort;
}

@property(nonatomic) int sort; // @synthesize sort;
@property(nonatomic) int subDataType; // @synthesize subDataType;
@property(nonatomic) int dataType; // @synthesize dataType;
@property(copy, nonatomic) NSString *extend; // @synthesize extend;
@property(copy, nonatomic) NSString *subContent; // @synthesize subContent;
@property(copy, nonatomic) NSString *content; // @synthesize content;
@property(copy, nonatomic) NSString *version; // @synthesize version;
@property(nonatomic) int language; // @synthesize language;
@property(nonatomic) int operationType; // @synthesize operationType;
@property(copy, nonatomic) NSString *relationID; // @synthesize relationID;
@property(copy, nonatomic) NSString *key; // @synthesize key;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

