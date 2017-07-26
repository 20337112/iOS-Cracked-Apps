//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTChatMessageContent.h"

@class NSString;

@interface CTChatImageMessage : CTChatMessageContent
{
    _Bool _full;
    NSString *_imageUrl;
    NSString *_thumbUrl;
    NSString *_thumbPath;
    NSString *_imagePath;
    double _imageHeight;
    double _imageWidth;
    long long _uploadStatus;
}

+ (id)messageWithImageUrl:(id)arg1 thumbUrl:(id)arg2;
@property(nonatomic) long long uploadStatus; // @synthesize uploadStatus=_uploadStatus;
@property(nonatomic, getter=isFull) _Bool full; // @synthesize full=_full;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)previewBody;
- (struct CGSize)sizefromImage;
- (double)width;
- (double)height;

@end

