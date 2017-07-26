//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotelCommentGroupSearchRequest, HotelCommentGroupSearchResponse, NSMutableArray;

@interface HotelCommentGroupDataHolder : NSObject
{
    _Bool _hasMore;
    HotelCommentGroupSearchRequest *_lastRequest;
    HotelCommentGroupSearchRequest *_lastSuccessRequest;
    HotelCommentGroupSearchResponse *_lastResponse;
    NSMutableArray *_commentGroupList;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSMutableArray *commentGroupList; // @synthesize commentGroupList=_commentGroupList;
@property(retain, nonatomic) HotelCommentGroupSearchResponse *lastResponse; // @synthesize lastResponse=_lastResponse;
@property(retain, nonatomic) HotelCommentGroupSearchRequest *lastSuccessRequest; // @synthesize lastSuccessRequest=_lastSuccessRequest;
@property(retain, nonatomic) HotelCommentGroupSearchRequest *lastRequest; // @synthesize lastRequest=_lastRequest;
- (void).cxx_destruct;
- (id)initWithLastRequest:(id)arg1 lastSuccessRequest:(id)arg2 respone:(id)arg3 commentList:(id)arg4 hasMore:(_Bool)arg5;

@end

