//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "UITextFieldDelegate.h"

@class CTHotelOrderDetailCacheBean, NSMutableArray, NSString, UIButton, UILabel, UIScrollView;

@interface CTHotelOrderSignInViewController : CTRootViewController <UITextFieldDelegate>
{
    int _signType;
    long long _roomNum;
    long long _orderID;
    CTHotelOrderDetailCacheBean *_cache;
    UILabel *_lbDesp;
    NSMutableArray *_txRoomList;
    UIButton *_btnSubmit;
    UIScrollView *_scrollView;
    CDUnknownBlockType _sucessBlock;
}

@property(copy, nonatomic) CDUnknownBlockType sucessBlock; // @synthesize sucessBlock=_sucessBlock;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIButton *btnSubmit; // @synthesize btnSubmit=_btnSubmit;
@property(retain, nonatomic) NSMutableArray *txRoomList; // @synthesize txRoomList=_txRoomList;
@property(retain, nonatomic) UILabel *lbDesp; // @synthesize lbDesp=_lbDesp;
@property(retain, nonatomic) CTHotelOrderDetailCacheBean *cache; // @synthesize cache=_cache;
@property(nonatomic) long long orderID; // @synthesize orderID=_orderID;
@property(nonatomic) long long roomNum; // @synthesize roomNum=_roomNum;
@property(nonatomic) int signType; // @synthesize signType=_signType;
- (void).cxx_destruct;
- (void)sendRoomNameService:(id)arg1;
- (void)submitClick:(id)arg1;
- (void)buildView;
- (void)texdfieldDismiss:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)initBaseView;
- (void)initBaseData;
- (id)initWithSucessBlock:(CDUnknownBlockType)arg1 withCache:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

