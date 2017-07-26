//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSLayoutConstraint, TranslationHistoryModel, UIButton, UIImageView, UILabel, UIView;

@interface CTTextTranslateHistoryCell : UITableViewCell
{
    UILabel *_translateFromLabel;
    UILabel *_translateToLabel;
    NSArray *_seperaterViewsHeight;
    NSArray *_seperaterViews;
    TranslationHistoryModel *_historyModel;
    UIButton *_fullScreenButton;
    UIButton *_deleteHistoryButton;
    id <CTHandleTranslateHistoryProtocol> _delegate;
    NSLayoutConstraint *_translateFromLabelHeight;
    NSLayoutConstraint *_translateToLabelHeight;
    UIView *_container;
    UIImageView *_backgroundImage;
}

+ (double)heightForCellWithPost:(id)arg1;
+ (double)detailTextHeight:(id)arg1 withFontSize:(double)arg2;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSLayoutConstraint *translateToLabelHeight; // @synthesize translateToLabelHeight=_translateToLabelHeight;
@property(retain, nonatomic) NSLayoutConstraint *translateFromLabelHeight; // @synthesize translateFromLabelHeight=_translateFromLabelHeight;
@property(nonatomic) __weak id <CTHandleTranslateHistoryProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *deleteHistoryButton; // @synthesize deleteHistoryButton=_deleteHistoryButton;
@property(retain, nonatomic) UIButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(retain, nonatomic) TranslationHistoryModel *historyModel; // @synthesize historyModel=_historyModel;
@property(retain, nonatomic) NSArray *seperaterViews; // @synthesize seperaterViews=_seperaterViews;
@property(retain, nonatomic) NSArray *seperaterViewsHeight; // @synthesize seperaterViewsHeight=_seperaterViewsHeight;
@property(retain, nonatomic) UILabel *translateToLabel; // @synthesize translateToLabel=_translateToLabel;
@property(retain, nonatomic) UILabel *translateFromLabel; // @synthesize translateFromLabel=_translateFromLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)deleteHistory:(id)arg1;
- (void)fullScreenClick:(id)arg1;

@end

