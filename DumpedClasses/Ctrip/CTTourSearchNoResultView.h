//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CTHTTPClient, CTTourSearchNoResultFilterView, CTTourSearchNoResultFlightHotelView, CTTourSearchNoResultRecommendView, NSDictionary, NSMutableArray, NSString;

@interface CTTourSearchNoResultView : UIView
{
    NSMutableArray *_filterItems;
    CTHTTPClient *_client;
    NSString *_promptText;
    NSDictionary *_flightHotelParams;
    NSDictionary *_destinationParams;
    CDUnknownBlockType _destinationBlock;
    CDUnknownBlockType _filterBlock;
    UIView *_searchNoResultHintView;
    CTTourSearchNoResultRecommendView *_searchNoResultRecommendView;
    CTTourSearchNoResultFlightHotelView *_searchNoResultFlightHotelView;
    CTTourSearchNoResultFilterView *_searchNoResultFilterView;
}

@property(retain, nonatomic) CTTourSearchNoResultFilterView *searchNoResultFilterView; // @synthesize searchNoResultFilterView=_searchNoResultFilterView;
@property(retain, nonatomic) CTTourSearchNoResultFlightHotelView *searchNoResultFlightHotelView; // @synthesize searchNoResultFlightHotelView=_searchNoResultFlightHotelView;
@property(retain, nonatomic) CTTourSearchNoResultRecommendView *searchNoResultRecommendView; // @synthesize searchNoResultRecommendView=_searchNoResultRecommendView;
@property(retain, nonatomic) UIView *searchNoResultHintView; // @synthesize searchNoResultHintView=_searchNoResultHintView;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(copy, nonatomic) CDUnknownBlockType destinationBlock; // @synthesize destinationBlock=_destinationBlock;
@property(retain, nonatomic) NSDictionary *destinationParams; // @synthesize destinationParams=_destinationParams;
@property(retain, nonatomic) NSDictionary *flightHotelParams; // @synthesize flightHotelParams=_flightHotelParams;
@property(copy, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
@property(retain, nonatomic) CTHTTPClient *client; // @synthesize client=_client;
@property(retain, nonatomic) NSMutableArray *filterItems; // @synthesize filterItems=_filterItems;
- (void).cxx_destruct;
- (void)updateUI;
- (double)scrollMaxHeight;
- (double)spaceHeight;
- (void)upSearchIconView;
- (void)requestNoSearchRecommendCitieArray;
- (void)requestNoSearchFlightHotelData;
- (void)hideSearchNoResultView;
- (void)showSearchNoResultViewInView:(id)arg1 flightHotelParams:(id)arg2 destinationParams:(id)arg3 destinationBlock:(CDUnknownBlockType)arg4 selectedFilterArray:(id)arg5 selectedFilterBlock:(CDUnknownBlockType)arg6;
- (void)initSearchNoResultHintView;
- (id)initWithFrame:(struct CGRect)arg1 withPromptText:(id)arg2;

@end

