//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface PrototypeSimpleDataModel : CTBusinessBean
{
    int _flag;
    NSString *_dataType;
    NSString *_dataID;
    NSString *_dataName;
    NSString *_dataEnName;
    NSString *_dataValue;
    NSString *_filterItemID;
    NSString *_extension;
}

@property(copy, nonatomic) NSString *extension; // @synthesize extension=_extension;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(copy, nonatomic) NSString *filterItemID; // @synthesize filterItemID=_filterItemID;
@property(copy, nonatomic) NSString *dataValue; // @synthesize dataValue=_dataValue;
@property(copy, nonatomic) NSString *dataEnName; // @synthesize dataEnName=_dataEnName;
@property(copy, nonatomic) NSString *dataName; // @synthesize dataName=_dataName;
@property(copy, nonatomic) NSString *dataID; // @synthesize dataID=_dataID;
@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)init;

@end

