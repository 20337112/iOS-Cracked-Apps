//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class NSMutableArray;

@interface QYUDynamicTileBoardCardCell : QYUPhoneCardBaseCell
{
    NSMutableArray *_arraySubCells;
    NSMutableArray *_arrayControls;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
- (void).cxx_destruct;
- (void)checkAllRedDot;
- (void)onClicked:(id)arg1;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

