//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVGLImage, AVGLNickView, UIImageView;

@interface AVGLRenderView : NSObject
{
    AVGLImage *_image;
    struct {
        float Position[3];
        float TexCoord[2];
    } _vertexs[4];
    struct CGRect _frame;
    int _glTextureRotateAngle;
    id <AVGLRenderViewProtocol> _delegate;
    double _yRotateAngle;
    double _xRotateAngle;
    float _yRotateMatrix[16];
    float _textureRotateMatrix[4];
    float _textureBoundMatrix[4];
    float _textureScaleMatrix[4];
    unsigned int *_planarTextureHandles;
    unsigned int _rgbTexture;
    unsigned int _outputRgbTexture;
    double _boundWidth;
    _Bool _enableCutting;
    _Bool _hasBlackEdge;
    double _animationCoordDeviation[4];
    double _animationRotateDeviation;
    double _animationAlphaDeviation;
    struct CGRect _destinationFrame;
    int _textueDisplayType;
    _Bool _needDisplayLoading;
    double _textureYUVType;
    _Bool _isDisplayBlocked;
    _Bool _isDisplayStoped;
    _Bool _onlyDisplayBackGround;
    double _currentAnimationStep;
    AVGLNickView *_nickView;
    _Bool _isShowNickName;
    _Bool _isOpenGLDestroyed;
    unsigned int _YTextureTarget;
    unsigned int _UVTextureTarget;
    struct __CVBuffer *_yTexture;
    struct __CVBuffer *_uvTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    struct __CVBuffer *_piexelBuffer;
    _Bool _isOnDetailView;
    struct CGRect _renderFrame;
    double _preTexCoord30;
    double _preTexCoord31;
    float _currScale;
    float _currWidth;
    float _currHeight;
    float _currOffsetX;
    float _currOffsetY;
    struct CGPoint _currCenter;
    _Bool _isFloat;
    int _nickPosition;
    _Bool _micSpeakState;
    float _distortRange;
    int _distortOri;
    int _distortType;
    int _xo;
    _Bool _isStretchFrame;
    _Bool _isInTroopVideo;
    _Bool _isRoundRectShow;
    _Bool _isLocalLandScape;
    _Bool _isBlurState;
    int _positionType;
    int _nframeangle;
    int _viewMode;
    UIImageView *_micStateView;
}

+ (void)onRenderTimer:(id)arg1;
+ (double)getStepLengthAtIndex:(int)arg1 withAnimationType:(int)arg2;
+ (int)getAnimationStatus;
+ (_Bool)isAnimating;
+ (void)removeAllAnimation;
+ (void)resetAnimation;
+ (void)commitAnimations;
+ (void)setAnimationBaseView:(id)arg1;
+ (void)setAnimationCurve:(long long)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)beginAnimations:(id)arg1 context:(void *)arg2;
+ (void)registerAnimation:(id)arg1 withAnimationType:(int)arg2;
+ (_Bool)checkAnimation:(id)arg1 withAnimationType:(int)arg2;
+ (void)removeAnimation:(id)arg1 withAnimationType:(int)arg2;
@property(nonatomic) _Bool isBlurState; // @synthesize isBlurState=_isBlurState;
@property(nonatomic) unsigned int outputRgbTexture; // @synthesize outputRgbTexture=_outputRgbTexture;
@property(nonatomic) unsigned int rgbTexture; // @synthesize rgbTexture=_rgbTexture;
@property(nonatomic) int textueDisplayType; // @synthesize textueDisplayType=_textueDisplayType;
@property(nonatomic) int viewMode; // @synthesize viewMode=_viewMode;
@property(retain, nonatomic) UIImageView *micStateView; // @synthesize micStateView=_micStateView;
@property(nonatomic) int nframeangle; // @synthesize nframeangle=_nframeangle;
@property(nonatomic) _Bool isLocalLandScape; // @synthesize isLocalLandScape=_isLocalLandScape;
@property(nonatomic) _Bool isRoundRectShow; // @synthesize isRoundRectShow=_isRoundRectShow;
@property(nonatomic) _Bool isInTroopVideo; // @synthesize isInTroopVideo=_isInTroopVideo;
@property(nonatomic) int positionType; // @synthesize positionType=_positionType;
@property(nonatomic) _Bool isStretchFrame; // @synthesize isStretchFrame=_isStretchFrame;
- (id)convertBitmapRGBA8ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
- (char *)rgbaData:(id)arg1;
- (void)onMoveEnd;
- (void)onMove:(float)arg1 andY:(float)arg2;
- (void)onMoveBegin;
- (void)checkOutBound;
- (void)onScaleEnd;
- (void)onScaleChange:(struct CGPoint)arg1 withScale:(float)arg2;
- (void)onScaleBegin;
- (void)getshareScreenviewRectWithTouchpoint:(struct CGPoint)arg1 imageRect:(struct CGRect)arg2;
- (struct CGRect)getCurrentRenderRect;
- (void)onDoubleTouch:(struct CGPoint)arg1;
@property(nonatomic) _Bool isFloat; // @dynamic isFloat;
- (void)dealloc;
- (void)setMicSeakState:(_Bool)arg1;
- (void)updateShowMicShow;
- (void)destroyOpenGL;
- (void)animationEndWithAnimationType:(int)arg1;
- (void)updateNickView;
- (void)updateNickFrame;
- (void)animationAtStepIndex:(int)arg1 withAnimationType:(int)arg2;
- (void)bindBlurImageTexture;
@property(retain, nonatomic) AVGLImage *image; // @dynamic image;
- (void)setDisplayStop:(_Bool)arg1;
- (void)setDisplayBlock:(_Bool)arg1;
- (void)textureRGB:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (void)cleanTexture;
- (void)textureCVImageBuffer:(struct __CVBuffer *)arg1 widthType:(int)arg2 heightType:(int)arg3;
- (void)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (void)textureNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (float)getAutoRotateAngle;
- (void)drawLoading;
- (void)drawBackground;
- (void)renderRGBTextureWithframeBuffer:(unsigned int)arg1;
- (void)drawTexture;
- (void)drawFrame;
- (void)setDistort:(float)arg1 andOrientation:(int)arg2 andType:(int)arg3;
- (void)applyRotationWithDegree:(float)arg1 withAxis:(int)arg2 withType:(int)arg3;
- (void)updateVBOWithDrawType:(int)arg1;
- (void)setBoundsWithWidth:(float)arg1;
- (void)updateVertexs;
- (void)updateTexCoord;
- (void)setNickName:(id)arg1;
- (void)hideNickName;
- (void)showNikeName;
- (void)setNickNameHidden:(_Bool)arg1;
- (void)setCuttingEnable:(_Bool)arg1;
- (void)setHasBlackEdge:(_Bool)arg1;
- (void)setNeedMirrorReverse:(_Bool)arg1;
- (void)updateFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
- (void)setAnimationStep:(double)arg1;
- (void)setRotate:(int)arg1;
- (void)initVertex;
- (void)updateLodingVertex;
- (void)setupTexture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) id <AVGLRenderViewProtocol> delegate; // @dynamic delegate;
@property(nonatomic) int nickPosition; // @dynamic nickPosition;
@property(retain, nonatomic) AVGLNickView *nickView; // @dynamic nickView;

@end
