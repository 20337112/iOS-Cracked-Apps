//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBTakeoutApi : NSObject
{
    _Bool _needLogin;
    _Bool _usePost;
    NSString *_api;
    NSString *_version;
    NSDictionary *_parameters;
    Class _modelClass;
    NSString *_topKey;
}

+ (id)serviceApi:(id)arg1 modelClass:(Class)arg2;
+ (id)serviceApi:(id)arg1;
@property(copy, nonatomic) NSString *topKey; // @synthesize topKey=_topKey;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(nonatomic) _Bool usePost; // @synthesize usePost=_usePost;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool needLogin; // @synthesize needLogin=_needLogin;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *api; // @synthesize api=_api;
- (void).cxx_destruct;
- (id)initWithApi:(id)arg1 modelClass:(Class)arg2;

@end
