//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemGroup, NSString;

@interface FBGroupNotificationSettingRowModel : FBValueObject <NSCopying>
{
    _Bool _isSelected;
    _Bool _isLastRow;
    long long _notificationSettingType;
    FBMemGroup *_group;
    NSString *_setting;
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) _Bool isLastRow; // @synthesize isLastRow=_isLastRow;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *setting; // @synthesize setting=_setting;
@property(readonly, copy, nonatomic) FBMemGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) long long notificationSettingType; // @synthesize notificationSettingType=_notificationSettingType;
- (void).cxx_destruct;
- (id)initWithNotificationSettingType:(long long)arg1 group:(id)arg2 setting:(id)arg3 title:(id)arg4 subtitle:(id)arg5 isSelected:(_Bool)arg6 isLastRow:(_Bool)arg7;

@end

