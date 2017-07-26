//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSString, UIImage, UIView;

@interface CTTranslateVideoCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int _frametype;
    UIView *_preview;
    AVCaptureSession *_captureSession;
    AVCaptureStillImageOutput *_captureOutput;
    char *_buffer_temp;
    char *_buffer_obox;
    UIImage *_retImage;
    struct CGRect _subImageRect;
    id <TranslateVideoCaptureDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_capturePreview;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInput *_captureInput;
}

@property(retain, nonatomic) AVCaptureDeviceInput *captureInput; // @synthesize captureInput=_captureInput;
@property(retain, nonatomic) AVCaptureDevice *captureDevice; // @synthesize captureDevice=_captureDevice;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *capturePreview; // @synthesize capturePreview=_capturePreview;
@property(nonatomic) __weak id <TranslateVideoCaptureDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isStop;
- (_Bool)stop;
- (_Bool)start;
- (void)do_stop;
- (void)do_start;
- (_Bool)destory;
- (void)do_destory;
- (void)captureimage;
- (long long)getOrientation;
- (_Bool)create:(id)arg1 frame:(int)arg2 delegate:(id)arg3;
- (void)do_create;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

