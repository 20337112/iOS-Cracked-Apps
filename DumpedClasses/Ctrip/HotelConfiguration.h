//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@interface HotelConfiguration : CTBusinessBean
{
    int _configKey;
    int _configValue;
}

@property(nonatomic) int configValue; // @synthesize configValue=_configValue;
@property(nonatomic) int configKey; // @synthesize configKey=_configKey;
- (id)getPBAnnotationArray;
- (id)init;

@end

