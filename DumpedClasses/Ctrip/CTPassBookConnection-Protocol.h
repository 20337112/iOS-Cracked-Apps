//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, NSURLConnection;

@protocol CTPassBookConnection <NSObject>

@optional
- (void)doCTLoadingViewend;
- (void)doCTLoadingViewbegin;
- (void)dissmissPassesViewController;
- (void)connectionLoadDataError;
- (void)connectionLoadDataSuccess:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)errorConnection;
@end
