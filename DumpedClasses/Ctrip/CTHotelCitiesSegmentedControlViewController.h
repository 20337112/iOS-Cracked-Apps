//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class UIView;

@interface CTHotelCitiesSegmentedControlViewController : CTRootViewController
{
    int _selectedCountry;
    id <CTHotelCitiesSegmentedControlViewControllerDelegate> _delegate;
    UIView *_indicatorView;
}

@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) int selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(nonatomic) __weak id <CTHotelCitiesSegmentedControlViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonTouchUpInside:(id)arg1;
- (id)createButtonWithName:(id)arg1 andCountry:(int)arg2;
- (void)viewDidLoad;

@end

