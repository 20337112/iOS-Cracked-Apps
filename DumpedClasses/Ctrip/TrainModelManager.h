//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TrainModelManager : NSObject
{
}

+ (void)updateModel:(id)arg1 withDict:(id)arg2 ignoringCase:(_Bool)arg3 modelMap:(id)arg4 propertyMap:(id)arg5;
+ (void)updateModel:(id)arg1 withDict:(id)arg2 ignoringCase:(_Bool)arg3;
+ (id)modelWithClassName:(id)arg1 info:(id)arg2;
+ (id)modelWithClassName:(id)arg1 json:(id)arg2;
+ (id)modelListWithClass:(Class)arg1 array:(id)arg2;
+ (id)modelListWithClassName:(id)arg1 array:(id)arg2;
+ (id)jsonProxyObjectFor:(id)arg1;
+ (id)makeValAsString:(id)arg1;
+ (id)makeValAsBool:(id)arg1;
+ (id)makeValAsDouble:(id)arg1;
+ (id)makeValAsFloat:(id)arg1;
+ (id)makeValAsInt:(id)arg1;

@end

