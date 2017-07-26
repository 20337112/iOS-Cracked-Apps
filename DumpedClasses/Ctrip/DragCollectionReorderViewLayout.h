//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, NSIndexPath, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;

@interface DragCollectionReorderViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>
{
    _Bool _setUped;
    id <DragCollectionViewReorderDelegate><UICollectionViewDelegate> _delegate;
    id <DragCollectionViewReorderDataSource><UICollectionViewDataSource> _dataSource;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView *_cellFakeView;
    long long _dragScrollDirection;
    CADisplayLink *_displayLink;
    NSIndexPath *_reorderingCellIndexPath;
    struct CGPoint _panTranslation;
    struct CGPoint _cellFakeViewCenter;
    struct UIEdgeInsets _scrollTrigerEdgeInsets;
    struct UIEdgeInsets _scrollTrigePadding;
}

@property(nonatomic) struct UIEdgeInsets scrollTrigePadding; // @synthesize scrollTrigePadding=_scrollTrigePadding;
@property(nonatomic) struct UIEdgeInsets scrollTrigerEdgeInsets; // @synthesize scrollTrigerEdgeInsets=_scrollTrigerEdgeInsets;
@property(retain, nonatomic) NSIndexPath *reorderingCellIndexPath; // @synthesize reorderingCellIndexPath=_reorderingCellIndexPath;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) _Bool setUped; // @synthesize setUped=_setUped;
@property(nonatomic) long long dragScrollDirection; // @synthesize dragScrollDirection=_dragScrollDirection;
@property(nonatomic) struct CGPoint cellFakeViewCenter; // @synthesize cellFakeViewCenter=_cellFakeViewCenter;
@property(retain, nonatomic) UIView *cellFakeView; // @synthesize cellFakeView=_cellFakeView;
@property(nonatomic) struct CGPoint panTranslation; // @synthesize panTranslation=_panTranslation;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) __weak id <DragCollectionViewReorderDataSource><UICollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <DragCollectionViewReorderDelegate><UICollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)moveItemIfNeeded;
- (void)autoScroll;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateDisplayLink;
- (void)setUpDisplayLink;
- (void)setUpCollectionViewGesture;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

