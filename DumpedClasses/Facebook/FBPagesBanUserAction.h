//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBFeedSecondaryAction-Protocol.h"

@class FBFeedSecondaryActionContext, FBMemModelObject, NSString;
@protocol FBQueriedFeedUnitFieldsProtocol;

@interface FBPagesBanUserAction : NSObject <FBFeedSecondaryAction>
{
    FBMemModelObject<FBQueriedFeedUnitFieldsProtocol> *_unit;
    FBFeedSecondaryActionContext *_context;
}

- (void).cxx_destruct;
- (id)detail;
- (id)overrideIcon;
- (unsigned long long)glyphName;
- (id)title;
- (id)accessibilityIdentifier;
- (void)performWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2;
- (void)_banActor:(id)arg1 inWindow:(id)arg2;
- (id)initWithUnit:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

