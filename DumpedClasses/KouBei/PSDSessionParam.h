//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PSDSessionParam : NSObject
{
    Class _viewControllerCls;
    Class _contentViewCls;
    NSString *_url;
    NSDictionary *_expandParams;
}

@property(retain, nonatomic) NSDictionary *expandParams; // @synthesize expandParams=_expandParams;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) Class contentViewCls; // @synthesize contentViewCls=_contentViewCls;
@property(nonatomic) Class viewControllerCls; // @synthesize viewControllerCls=_viewControllerCls;
- (void).cxx_destruct;
- (id)init;

@end

