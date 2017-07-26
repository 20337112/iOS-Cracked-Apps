//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootView.h"

@class CTTrainSeatSelectItemModel, NSArray;

@interface CTTrainSeatSelectItemView : CTRootView
{
    id <CTTrainSeatSelectItemViewDelegate> _delegate;
    long long _type;
    CTTrainSeatSelectItemModel *_selectItemModel;
    long long _labelButtonSpacing;
    double _width;
    NSArray *_seat6ModelArray;
}

@property(retain, nonatomic) NSArray *seat6ModelArray; // @synthesize seat6ModelArray=_seat6ModelArray;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) long long labelButtonSpacing; // @synthesize labelButtonSpacing=_labelButtonSpacing;
@property(retain, nonatomic) CTTrainSeatSelectItemModel *selectItemModel; // @synthesize selectItemModel=_selectItemModel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <CTTrainSeatSelectItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createSeatButtonWithID:(id)arg1 xOffset:(double)arg2 seatModel:(id)arg3;
- (id)createLabelWithTitle:(id)arg1 xOffset:(double)arg2;
- (void)updateItemModel:(id)arg1;
- (void)selectSeatAction:(id)arg1;
- (double)seatItemViewWidth;
- (void)init6SubView;
- (void)initSubView;
- (id)initWithType:(long long)arg1 seatModelArray:(id)arg2;
- (id)initWithType:(long long)arg1 selectItemModel:(id)arg2;

@end

