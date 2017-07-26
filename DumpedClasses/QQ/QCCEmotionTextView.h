//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class UIFaceKeyBoard, UIView;

@interface QCCEmotionTextView : UITextView
{
    UIFaceKeyBoard *_gtEmotionBoard;
    UIView *_emotionBoardContainer;
    struct _NSRange _selectedRange;
    double _lineSpacing;
}

@property(retain, nonatomic) UIView *emotionBoardContainer; // @synthesize emotionBoardContainer=_emotionBoardContainer;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void).cxx_destruct;
- (void)backSpaceFace;
- (id)insertEmoji:(id)arg1 toText:(id)arg2 atLocation:(int)arg3;
- (void)faceChoosed:(id)arg1;
- (void)showEmotionBoard;
- (void)showKeyBoard;

@end
