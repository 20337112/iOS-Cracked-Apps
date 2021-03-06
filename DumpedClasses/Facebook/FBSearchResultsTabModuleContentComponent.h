//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSearchComponentModel, FBSearchResultsContext, FBSearchResultsTabModuleConfig;

@interface FBSearchResultsTabModuleContentComponent : CKCompositeComponent
{
    FBSearchComponentModel *_moduleEdgeModel;
    FBSearchResultsTabModuleConfig *_tabModuleConfig;
    FBSearchResultsContext *_context;
}

+ (id)newWithModuleEdgeModel:(id)arg1 tabModuleConfig:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FBSearchResultsTabModuleConfig *tabModuleConfig; // @synthesize tabModuleConfig=_tabModuleConfig;
@property(readonly, nonatomic) FBSearchComponentModel *moduleEdgeModel; // @synthesize moduleEdgeModel=_moduleEdgeModel;
- (void).cxx_destruct;

@end

