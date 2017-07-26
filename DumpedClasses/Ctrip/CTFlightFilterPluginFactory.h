//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTFlightFilterPluginFactory : NSObject
{
}

+ (id)getTravelerEligibilityPluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getStopCityPluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getAirlinePluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getClassPluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getCraftTypePluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getAirportPluginWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (_Bool)isInternationalFilter:(long long)arg1;
+ (_Bool)isInlandFilter:(long long)arg1;
+ (int)getCellChooseTypeWithEnterType:(long long)arg1 andPluginViewType:(long long)arg2;
+ (id)getTabNameWithPluginViewType:(long long)arg1;
+ (id)getDefualtVauleWithEnterType:(long long)arg1 pluginViewType:(long long)arg2;
+ (id)getInlandPluginArrayWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getIntlReturnListPluginArrayWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getIntlGoListPluginArrayWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 delegate:(id)arg4 enterType:(long long)arg5;
+ (id)getFlightFilterPluginArrayWithFrame:(struct CGRect)arg1 filterWidgetDataModel:(id)arg2 flightFilterModel:(id)arg3 enterType:(long long)arg4 delegate:(id)arg5;

@end

