//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseCell.h"

@class CTDestContainerButton, NSArray;

@interface CTDestLocalGuideCell : CTDestBaseCell
{
    CDUnknownBlockType _singleBlock;
    NSArray *_dataArray;
    CTDestContainerButton *_view1;
    CTDestContainerButton *_view2;
    CTDestContainerButton *_view3;
    CTDestContainerButton *_view4;
}

+ (double)heightForCell:(int)arg1 withModel:(id)arg2;
@property(retain, nonatomic) CTDestContainerButton *view4; // @synthesize view4=_view4;
@property(retain, nonatomic) CTDestContainerButton *view3; // @synthesize view3=_view3;
@property(retain, nonatomic) CTDestContainerButton *view2; // @synthesize view2=_view2;
@property(retain, nonatomic) CTDestContainerButton *view1; // @synthesize view1=_view1;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType singleBlock; // @synthesize singleBlock=_singleBlock;
- (void).cxx_destruct;
- (void)refreshCell:(int)arg1 withModel:(id)arg2;
- (void)updateViewSubview:(id)arg1 model:(id)arg2 guideTag:(id)arg3;
- (void)bottomViewTapped;
- (void)tapView4;
- (void)tapView3;
- (void)tapView2;
- (void)tapView1;
- (id)createView:(struct CGRect)arg1;

@end

