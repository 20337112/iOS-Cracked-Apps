//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHotelActionViewModel, CTHotelDetailButton, CTHotelStyleLabel, CTRootViewController;

@interface CTHotelBtnTagView : UIView
{
    CTHotelDetailButton *btnAction;
    CTHotelStyleLabel *lbStyle;
    UIView *vLine;
    _Bool _hasLine;
    CTHotelActionViewModel *_data;
    CTRootViewController *_rootVC;
}

+ (double)getViewWidth:(id)arg1;
+ (double)btnWidth:(id)arg1;
@property(nonatomic) __weak CTRootViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(nonatomic) __weak CTHotelActionViewModel *data; // @synthesize data=_data;
@property(nonatomic) _Bool hasLine; // @synthesize hasLine=_hasLine;
- (void).cxx_destruct;
- (void)btnClick;
- (id)initWithRootVC:(id)arg1;

@end

