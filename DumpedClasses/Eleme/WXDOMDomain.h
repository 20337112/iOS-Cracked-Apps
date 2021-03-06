//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXDynamicDebuggerDomain.h"

@interface WXDOMDomain : WXDynamicDebuggerDomain
{
}

+ (id)domainName;
- (void)handleMethodWithName:(id)arg1 parameters:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)shadowRootPoppedWithHostId:(id)arg1 rootId:(id)arg2;
- (void)shadowRootPushedWithHostId:(id)arg1 root:(id)arg2;
- (void)childNodeRemovedWithParentNodeId:(id)arg1 nodeId:(id)arg2;
- (void)childNodeInsertedWithParentNodeId:(id)arg1 previousNodeId:(id)arg2 node:(id)arg3;
- (void)childNodeCountUpdatedWithNodeId:(id)arg1 childNodeCount:(id)arg2;
- (void)characterDataModifiedWithNodeId:(id)arg1 characterData:(id)arg2;
- (void)inlineStyleInvalidatedWithNodeIds:(id)arg1;
- (void)attributeRemovedWithNodeId:(id)arg1 name:(id)arg2;
- (void)attributeModifiedWithNodeId:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)setChildNodesWithParentId:(id)arg1 nodes:(id)arg2;
- (void)documentUpdated;

// Remaining properties
@property(nonatomic) id <WXDOMCommandDelegate><WXCommandDelegate> delegate; // @dynamic delegate;

@end

