//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegateFlowLayout.h"

@class NSIndexPath, UICollectionView;

@protocol DragCollectionViewReorderDataSource <UICollectionViewDelegateFlowLayout>

@optional
- (_Bool)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 canMoveToIndexPath:(NSIndexPath *)arg3;
- (NSIndexPath *)collectionView:(UICollectionView *)arg1 fingerInItemPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 didMoveToIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 itemAtIndexPath:(NSIndexPath *)arg2 willMoveToIndexPath:(NSIndexPath *)arg3;
@end

