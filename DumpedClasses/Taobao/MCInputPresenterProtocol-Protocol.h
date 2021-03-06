//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenterProtocol.h"
#import "NSObject.h"

@class NSArray, NSString, UIView<MCChatPageInputViewProtocol>, UIViewController;

@protocol MCInputPresenterProtocol <NSObject, MCBasePresenterProtocol>
@property(nonatomic) _Bool isHiddenToBottom;
@property(retain, nonatomic) id <MCInputModelProtocol> inputModel;
@property(retain, nonatomic) UIView<MCChatPageInputViewProtocol> *inputView;
@property(retain, nonatomic) NSArray *callUserList;
- (void)removeDelegate:(id <MCInputPresenterDelegate>)arg1;
- (void)addDelegate:(id <MCInputPresenterDelegate>)arg1;
- (_Bool)becomeFirstResponder;
- (void)closeKeyboardArea;
- (id)initWithBaseVC:(UIViewController *)arg1 bizKey:(NSString *)arg2 moduleSPM:(NSString *)arg3 pageName:(NSString *)arg4;
@end

