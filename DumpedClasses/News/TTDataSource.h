//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTBaseDataSource.h"

@interface TTDataSource : TTBaseDataSource
{
}

- (void)updateDataAtIndexPaths:(id)arg1 withDataArray:(id)arg2;
- (void)removePageDataAtIndexPath:(id)arg1;
- (void)updateMorePageDataArray:(id)arg1;
- (void)updateMorePageDataArray:(id)arg1 atIndex:(long long)arg2;
- (id)addItems:(id)arg1 atIndex:(long long)arg2;
- (void)updateFirstPageDataArray:(id)arg1;
- (id)cellEntityArray:(id)arg1;
- (id)cellEntity:(id)arg1 indexPath:(id)arg2;

@end
