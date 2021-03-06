//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeButton, KGThemeLabel, KGThemeLine, KGThemeView, NSIndexPath, NSString, UILabel;

@interface KTVFreeGetKCell : UITableViewCell
{
    KGThemeView *_bgView;
    UILabel *_titleLab;
    KGThemeLabel *_decribeLab;
    KGThemeLine *_line;
    KGThemeButton *_actionBtn;
    long long _actionType;
    NSString *_tempActivityName;
    long long _tempGiveKB;
    id _delegate;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeColorWillChange:(id)arg1;
- (id)parseAttributeStringWithActivityName:(id)arg1 giveKB:(long long)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)actionInviteSong;
- (void)actionSing;
- (void)actionLogin;
- (void)actionAction:(id)arg1;
- (void)setInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

