//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTLiveChatMsgBaseCell.h"

#import "CTImageViewDelegate.h"
#import "CTLiveChatScoreViewDelegate.h"
#import "CTLivechatScoreUnsatisfyReasonCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class CTImageView, CTLiveChatScoreView, NSMutableArray, NSString, UIButton, UILabel, UITableView, UITextView, UIView;

@interface CTLivechatScoreViewCell : CTLiveChatMsgBaseCell <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, CTLivechatScoreUnsatisfyReasonCellDelegate, CTLiveChatScoreViewDelegate, CTImageViewDelegate>
{
    NSMutableArray *reasonCells;
    NSMutableArray *scoreImageArr;
    double deviationBetweenScoreImageAndScoreLab;
    _Bool clicked;
    NSString *defaultInputContent;
    id <CTLivechatScoreViewCellDelegate> _setScoreDelegate;
    NSMutableArray *_checkedReasons;
    long long _lastSetScore;
    NSMutableArray *_unsatisfyReasons;
    UILabel *_scoreCellTopLab;
    UIButton *_score1;
    UIButton *_score2;
    UIButton *_score3;
    UIButton *_score4;
    UIButton *_score5;
    UILabel *_scoreLab;
    UILabel *_scoreLabForShowOnly;
    CTImageView *_unsatisfyReasonTopLine;
    UILabel *_unsatisfyReasonLable;
    UITableView *_unsatisfyReasonTable;
    CTLiveChatScoreView *_scoreReasonCheckView;
    UITextView *_unsatisfyRresonInput;
    UIButton *_scoreButton;
    UILabel *_scoreResultLab;
    UIView *_scoreBackGround;
}

@property(retain, nonatomic) UIView *scoreBackGround; // @synthesize scoreBackGround=_scoreBackGround;
@property(retain, nonatomic) UILabel *scoreResultLab; // @synthesize scoreResultLab=_scoreResultLab;
@property(retain, nonatomic) UIButton *scoreButton; // @synthesize scoreButton=_scoreButton;
@property(retain, nonatomic) UITextView *unsatisfyRresonInput; // @synthesize unsatisfyRresonInput=_unsatisfyRresonInput;
@property(retain, nonatomic) CTLiveChatScoreView *scoreReasonCheckView; // @synthesize scoreReasonCheckView=_scoreReasonCheckView;
@property(retain, nonatomic) UITableView *unsatisfyReasonTable; // @synthesize unsatisfyReasonTable=_unsatisfyReasonTable;
@property(retain, nonatomic) UILabel *unsatisfyReasonLable; // @synthesize unsatisfyReasonLable=_unsatisfyReasonLable;
@property(retain, nonatomic) CTImageView *unsatisfyReasonTopLine; // @synthesize unsatisfyReasonTopLine=_unsatisfyReasonTopLine;
@property(retain, nonatomic) UILabel *scoreLabForShowOnly; // @synthesize scoreLabForShowOnly=_scoreLabForShowOnly;
@property(retain, nonatomic) UILabel *scoreLab; // @synthesize scoreLab=_scoreLab;
@property(retain, nonatomic) UIButton *score5; // @synthesize score5=_score5;
@property(retain, nonatomic) UIButton *score4; // @synthesize score4=_score4;
@property(retain, nonatomic) UIButton *score3; // @synthesize score3=_score3;
@property(retain, nonatomic) UIButton *score2; // @synthesize score2=_score2;
@property(retain, nonatomic) UIButton *score1; // @synthesize score1=_score1;
@property(retain, nonatomic) UILabel *scoreCellTopLab; // @synthesize scoreCellTopLab=_scoreCellTopLab;
@property(retain, nonatomic) NSMutableArray *unsatisfyReasons; // @synthesize unsatisfyReasons=_unsatisfyReasons;
@property(nonatomic) long long lastSetScore; // @synthesize lastSetScore=_lastSetScore;
@property(retain, nonatomic) NSMutableArray *checkedReasons; // @synthesize checkedReasons=_checkedReasons;
@property(nonatomic) __weak id <CTLivechatScoreViewCellDelegate> setScoreDelegate; // @synthesize setScoreDelegate=_setScoreDelegate;
- (void).cxx_destruct;
- (void)hideKeyBoard;
- (void)submitScore:(id)arg1 inputReason:(id)arg2;
- (void)setReasonCallBack:(id)arg1;
- (void)setScoreCallBack:(id)arg1;
- (void)setUnsatisfyReason:(id)arg1;
- (void)setScoreReason:(id)arg1;
- (void)checkCellCallBack:(id)arg1;
- (void)setUnsatisfyReasonValue:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setDisableThenSubmitScore;
- (void)showSubmitOverContent;
- (void)submitScore;
- (double)getDeviationBetweenScoreImageAndSocreLab:(id)arg1:(double)arg2;
- (void)showScoreLab:(long long)arg1;
- (void)reloadScoreImage:(long long)arg1;
- (void)userSetScore:(id)arg1;
- (void)DrawBackGroundView;
- (void)DrawButtomPart;
- (void)DrawMiddlePart;
- (void)DrawTopPart;
- (void)reDrawCurrentCell:(long long)arg1;
- (void)DrawCurrentCell;
- (id)setUnsatisfyReasonTopLineImage;
- (id)setScoreImage:(long long)arg1;
- (void)InitCellWithUnsatisfyReason:(id)arg1 isReDraw:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)drawCell:(id)arg1;
- (void)setValueFromMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

