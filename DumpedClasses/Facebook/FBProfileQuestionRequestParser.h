//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSString;
@protocol FBHttpRequestToken, FBProfileQuestionRequestParserDelegate, FBServiceTransactionMutating;

@interface FBProfileQuestionRequestParser : NSObject
{
    id <FBServiceTransactionMutating> _saveQuestionToken;
    id <FBServiceTransactionMutating> _skipQuestionAndGetNextToken;
    id <FBHttpRequestToken> _skipQuestionToken;
    id <FBServiceTransactionMutating> _firstQuestionToken;
    struct CLLocationCoordinate2D _coordinate;
    id <FBProfileQuestionRequestParserDelegate> _delegate;
    FBUserSession *_session;
    NSString *_surface;
}

@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <FBProfileQuestionRequestParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancel;
- (id)_sendQuestionRequestWithQuestionID:(id)arg1 questionSessionID:(id)arg2 session:(id)arg3 parameters:(id)arg4 finishType:(unsigned long long)arg5;
- (void)saveCurrentQuestionAndRequestNextQuestion:(id)arg1 questionSessionID:(id)arg2 pageID:(id)arg3 privacy:(id)arg4 session:(id)arg5;
- (void)skipCurrentQuestionAndRequestNextQuestion:(id)arg1 questionSessionID:(id)arg2 session:(id)arg3;
- (void)skipCurrentQuestion:(id)arg1 questionSessionID:(id)arg2 session:(id)arg3;
- (id)_createUpdateRequestWithQuestionID:(id)arg1 parameters:(id)arg2;
- (void)requestFirstQuestion;
- (void)dealloc;
- (id)initWithSession:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 surface:(id)arg3;
- (id)initWithSession:(id)arg1 surface:(id)arg2;

@end

