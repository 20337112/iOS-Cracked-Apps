//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CreditCardViewItemModel.h"

@class NSString;

@interface CardTableModel : CreditCardViewItemModel
{
    int _ItemKey;
    int _ItemID;
    int _CategoryBitmap;
    int _SubID_CCD;
    int _SubID_CCY;
    int _SubID_DC;
    NSString *_ItemCode;
    NSString *_ItemName;
    NSString *_ItemShortName;
    NSString *_ItemNameEN;
    NSString *_ItemNamePY;
    NSString *_ItemNameJP;
    NSString *_ItemFirstLetterEN;
    NSString *_ItemFirstLetterPY;
    double _DataSort;
    NSString *_SubID_ALI;
}

@property(copy, nonatomic) NSString *SubID_ALI; // @synthesize SubID_ALI=_SubID_ALI;
@property(nonatomic) int SubID_DC; // @synthesize SubID_DC=_SubID_DC;
@property(nonatomic) int SubID_CCY; // @synthesize SubID_CCY=_SubID_CCY;
@property(nonatomic) int SubID_CCD; // @synthesize SubID_CCD=_SubID_CCD;
@property(nonatomic) double DataSort; // @synthesize DataSort=_DataSort;
@property(nonatomic) int CategoryBitmap; // @synthesize CategoryBitmap=_CategoryBitmap;
@property(copy, nonatomic) NSString *ItemFirstLetterPY; // @synthesize ItemFirstLetterPY=_ItemFirstLetterPY;
@property(copy, nonatomic) NSString *ItemFirstLetterEN; // @synthesize ItemFirstLetterEN=_ItemFirstLetterEN;
@property(copy, nonatomic) NSString *ItemNameJP; // @synthesize ItemNameJP=_ItemNameJP;
@property(copy, nonatomic) NSString *ItemNamePY; // @synthesize ItemNamePY=_ItemNamePY;
@property(copy, nonatomic) NSString *ItemNameEN; // @synthesize ItemNameEN=_ItemNameEN;
@property(copy, nonatomic) NSString *ItemShortName; // @synthesize ItemShortName=_ItemShortName;
@property(copy, nonatomic) NSString *ItemName; // @synthesize ItemName=_ItemName;
@property(copy, nonatomic) NSString *ItemCode; // @synthesize ItemCode=_ItemCode;
@property(nonatomic) int ItemID; // @synthesize ItemID=_ItemID;
@property(nonatomic) int ItemKey; // @synthesize ItemKey=_ItemKey;
- (void).cxx_destruct;
- (id)databaseClone;
- (void)addServerModelData:(id)arg1 needUsedInfo:(_Bool)arg2;
- (id)init;

@end

