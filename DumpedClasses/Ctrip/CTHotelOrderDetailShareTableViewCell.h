//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface CTHotelOrderDetailShareTableViewCell : UITableViewCell
{
    UILabel *titleLabel;
    UILabel *_shareContentLabel;
    UIButton *_shareButton;
}

+ (double)getCellHeightWithContent:(id)arg1;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *shareContentLabel; // @synthesize shareContentLabel=_shareContentLabel;
- (void).cxx_destruct;
- (void)fillCellWithContent:(id)arg1 idx:(long long)arg2;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

