//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView;

@interface H5Menu : UIView
{
    int _type;
    NSArray *_menuItems;
    UIImageView *_backgroundView;
    NSMutableArray *_buttons;
    NSMutableArray *_separators;
    double _width;
    double _height;
    double _arrowXInScreen;
    double _arrowXInMenu;
}

@property(nonatomic) double arrowXInMenu; // @synthesize arrowXInMenu=_arrowXInMenu;
@property(nonatomic) double arrowXInScreen; // @synthesize arrowXInScreen=_arrowXInScreen;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) NSMutableArray *separators; // @synthesize separators=_separators;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)separatorView;
- (id)stretchImage:(id)arg1 withWidth:(double)arg2 height:(double)arg3 leftCap:(double)arg4;
- (id)backgroundImage;
- (void)dealloc;
- (id)initWithMenuControl:(id)arg1 type:(int)arg2 menuItems:(id)arg3 arrowXInScreen:(double)arg4;

@end

