/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable> {
    <MTLTexture> * _cachedTexture;
    unsigned int  _insertSeed;
    CAMetalLayer * _layer;
    NSMutableArray * _presentedHandlers;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; id x7; struct _CAMetalLayerPrivate {} x8; struct __IOSurface {} *x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; } * _priv;
    int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int insertSeed;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)addPresentedHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)didPresentAtTime:(double)arg1;
- (bool)hasPresentedHandlers;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; id x7; struct _CAMetalLayerPrivate {} x8; struct __IOSurface {} *x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1 layer:(id)arg2;
- (unsigned int)insertSeed;
- (id)layer;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; id x7; struct _CAMetalLayerPrivate {} x8; struct __IOSurface {} *x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)priv;
- (void)setDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned long long x5; unsigned long long x6; id x7; struct _CAMetalLayerPrivate {} x8; struct __IOSurface {} *x9; id x10; struct CGColorSpace {} *x11; unsigned int x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1;
- (void)setInsertSeed:(unsigned int)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)texture;

@end