//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface UnifyPortolEntityModel : CTBusinessBean
{
    NSString *_portolUrl;
    NSString *_portolImage;
}

@property(copy, nonatomic) NSString *portolImage; // @synthesize portolImage=_portolImage;
@property(copy, nonatomic) NSString *portolUrl; // @synthesize portolUrl=_portolUrl;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

