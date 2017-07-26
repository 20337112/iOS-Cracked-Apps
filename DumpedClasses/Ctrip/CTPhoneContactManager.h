//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CNContactPickerDelegate.h"

@class NSString;

@interface CTPhoneContactManager : NSObject <ABPeoplePickerNavigationControllerDelegate, CNContactPickerDelegate>
{
    long long originStatusBarStyle;
    _Bool _showDetailPage;
    CDUnknownBlockType _callback;
}

+ (id)shareInstance;
@property(nonatomic) _Bool showDetailPage; // @synthesize showDetailPage=_showDetailPage;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (id)telephoneStringFromString:(id)arg1;
- (_Bool)string:(id)arg1 isContainsString:(id)arg2;
- (id)getTheEnclosedStringFrom:(id)arg1 wiithLeftBand:(id)arg2 rightBand:(id)arg3;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)didSelectedContacts:(id)arg1;
- (void)didSelectedContactsProperty:(id)arg1;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)setEmailFrom:(void *)arg1 to:(id)arg2;
- (void)setAddressFrom:(void *)arg1 to:(id)arg2;
- (void)processContact:(id)arg1 didSelectPerson:(void *)arg2;
- (void)processContact:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)presentContactVCIn:(id)arg1 withPropertyResult:(CDUnknownBlockType)arg2 showDetailPage:(_Bool)arg3;
- (void)presentContactVCIn:(id)arg1 withPropertyResult:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

