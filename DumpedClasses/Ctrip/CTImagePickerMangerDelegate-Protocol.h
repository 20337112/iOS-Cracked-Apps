//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTImagePickerManger, NSArray;

@protocol CTImagePickerMangerDelegate <NSObject>

@optional
- (void)ct_imageUploadCompleted:(CTImagePickerManger *)arg1 withImages:(NSArray *)arg2;
- (void)ct_imagePickerCompleted:(CTImagePickerManger *)arg1 withImages:(NSArray *)arg2;
- (void)ct_imagePickerDidFailedWithUnAuthorized:(CTImagePickerManger *)arg1;
- (void)ct_imagePickerDidCancelPick:(CTImagePickerManger *)arg1;
- (void)ct_imagePicker:(CTImagePickerManger *)arg1 didFinishedUploadImages:(NSArray *)arg2;
- (void)ct_imagePicker:(CTImagePickerManger *)arg1 didFinishedPickScaledImages:(NSArray *)arg2;
@end

