//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIScrollView;

@interface CTHotelAppendView : UIView
{
    UIScrollView *_imageListView;
    int _type;
    id <CTHotelAppendViewDelegate> cDelegate;
    UIView *_lineV;
    UILabel *_lbl;
    UIView *_arrowView;
}

+ (id)getSpecialAppendAddtiongString:(long long)arg1;
+ (int)getUIImageListHight:(id)arg1;
+ (int)getNumbersOfLineUILableHight:(id)arg1 withSecond:(id)arg2 withWidth:(int)arg3 with:(_Bool)arg4 withIsShow:(_Bool)arg5;
+ (_Bool)isDisplayArrowView:(id)arg1 withSecond:(id)arg2 withWidth:(int)arg3;
+ (int)getAppendViewHight:(id)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *lbl; // @synthesize lbl=_lbl;
@property(retain, nonatomic) UIView *lineV; // @synthesize lineV=_lineV;
@property(nonatomic) __weak id <CTHotelAppendViewDelegate> cDelegate; // @synthesize cDelegate;
- (void).cxx_destruct;
- (void)createUIImageList:(id)arg1 withRow:(long long)arg2 withDelegate:(id)arg3 witchAction:(SEL)arg4 withTag:(int)arg5;
- (void)lblClickEvent:(id)arg1;
- (void)createCommentArrowWithRow:(long long)arg1 withIsExpanded:(_Bool)arg2;
- (void)createUILable:(id)arg1 withSecond:(id)arg2 withExpend:(_Bool)arg3 withRow:(long long)arg4 withIsHasArrow:(_Bool)arg5;
- (void)setLineHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2 withRow:(long long)arg3 withDelegate:(id)arg4 witchAction:(SEL)arg5 withTag:(int)arg6 withContentDelegate:(id)arg7;
- (void)dealloc;

@end

