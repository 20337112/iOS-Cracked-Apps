//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface NoteInformationModel : CTBusinessBean
{
    int _noteType;
    int _indexNo;
    NSString *_noteTitle;
    NSMutableArray *_noteItemList;
}

@property(retain, nonatomic) NSMutableArray *noteItemList; // @synthesize noteItemList=_noteItemList;
@property(copy, nonatomic) NSString *noteTitle; // @synthesize noteTitle=_noteTitle;
@property(nonatomic) int indexNo; // @synthesize indexNo=_indexNo;
@property(nonatomic) int noteType; // @synthesize noteType=_noteType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

