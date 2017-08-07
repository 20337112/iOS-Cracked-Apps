//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUPBaseModel.h"

@class NSArray<SUPDeductionModel>, NSArray<SUPExpensesModel>, NSDictionary, SUPOrderModel;

@interface SUPObjectionModel : SUPBaseModel
{
    SUPOrderModel *_order;
    NSArray<SUPExpensesModel> *_expenses;
    NSArray<SUPDeductionModel> *_deductions;
    NSDictionary *_pageInfo;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDictionary *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(retain, nonatomic) NSArray<SUPDeductionModel> *deductions; // @synthesize deductions=_deductions;
@property(retain, nonatomic) NSArray<SUPExpensesModel> *expenses; // @synthesize expenses=_expenses;
@property(retain, nonatomic) SUPOrderModel *order; // @synthesize order=_order;
- (void).cxx_destruct;

@end
