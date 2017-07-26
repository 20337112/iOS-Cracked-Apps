//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CTServiceQueueFlags : NSObject <NSCopying>
{
    _Bool _isShowLoading;
    _Bool _isShowCancel;
    _Bool _isGoBackAfterCancel;
    _Bool _isShowError;
    _Bool _isShowProgress;
    _Bool _isCurrentPageRequest;
    int _animateType;
    int _showErrorType;
}

@property(nonatomic) int showErrorType; // @synthesize showErrorType=_showErrorType;
@property(nonatomic) int animateType; // @synthesize animateType=_animateType;
@property(nonatomic) _Bool isCurrentPageRequest; // @synthesize isCurrentPageRequest=_isCurrentPageRequest;
@property(nonatomic) _Bool isShowProgress; // @synthesize isShowProgress=_isShowProgress;
@property(nonatomic) _Bool isShowError; // @synthesize isShowError=_isShowError;
@property(nonatomic) _Bool isGoBackAfterCancel; // @synthesize isGoBackAfterCancel=_isGoBackAfterCancel;
@property(nonatomic) _Bool isShowCancel; // @synthesize isShowCancel=_isShowCancel;
@property(nonatomic) _Bool isShowLoading; // @synthesize isShowLoading=_isShowLoading;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

