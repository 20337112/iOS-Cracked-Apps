//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ThirdPartyCommentInformationModel : CTBusinessBean
{
    NSString *_commentUrl;
    NSString *_commentDisplayText;
}

@property(copy, nonatomic) NSString *commentDisplayText; // @synthesize commentDisplayText=_commentDisplayText;
@property(copy, nonatomic) NSString *commentUrl; // @synthesize commentUrl=_commentUrl;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

