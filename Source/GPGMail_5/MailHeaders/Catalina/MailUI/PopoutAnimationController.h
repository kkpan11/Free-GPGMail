//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class CALayer, MailWindowShadowLayer, NSDictionary, NSWindow;

@interface PopoutAnimationController : NSObject
{
    NSDictionary *_sourceSnapshots;
    NSDictionary *_destinationSnapshots;
    NSWindow *_animationWindow;
    CALayer *_backgroundLayer;
    CALayer *_contentLayer;
    CALayer *_clipLayer;
    MailWindowShadowLayer *_shadowLayer;
    CALayer *_sourceHeaderLayer;
    CALayer *_sourceBodyLayer;
    CALayer *_destinationHeaderLayer;
    CALayer *_destinationBodyLayer;
    CALayer *_destinationToolbarLayer;
}

@property(nonatomic) __weak CALayer *destinationToolbarLayer; // @synthesize destinationToolbarLayer=_destinationToolbarLayer;
@property(nonatomic) __weak CALayer *destinationBodyLayer; // @synthesize destinationBodyLayer=_destinationBodyLayer;
@property(nonatomic) __weak CALayer *destinationHeaderLayer; // @synthesize destinationHeaderLayer=_destinationHeaderLayer;
@property(nonatomic) __weak CALayer *sourceBodyLayer; // @synthesize sourceBodyLayer=_sourceBodyLayer;
@property(nonatomic) __weak CALayer *sourceHeaderLayer; // @synthesize sourceHeaderLayer=_sourceHeaderLayer;
@property(nonatomic) __weak MailWindowShadowLayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(nonatomic) __weak CALayer *clipLayer; // @synthesize clipLayer=_clipLayer;
@property(nonatomic) __weak CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(nonatomic) __weak CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) NSWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
//- (void).cxx_destruct;
- (void)_updateDestinationSnapshots:(id)arg1;
- (void)_updateSourceSnapshots:(id)arg1;
- (id)_backgroundAnimation;
- (id)_toolbarAnimationWithFinalSize:(struct CGSize)arg1;
- (id)_internalTransitionAnimationWithDestination:(struct CGRect)arg1 fadeOut:(BOOL)arg2;
- (id)_sizeAnimationWithStartSize:(struct CGSize)arg1 endSize:(struct CGSize)arg2;
- (id)_positionAnimationWithStartPosition:(struct CGPoint)arg1 endPosition:(struct CGPoint)arg2 percentFromStart:(double)arg3;
- (id)_frameAnimationWithStart:(struct CGRect)arg1 destination:(struct CGRect)arg2;
//- (void)_performAnimationWithSourceGeometry:(id)arg1 destionationGeometry:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)_commonScreenRectForSource:(struct CGRect)arg1 destination:(struct CGRect)arg2;
- (void)_setupLayer:(id)arg1 withGeometry:(id)arg2;
- (id)_createContentLayerWithFrame:(struct CGRect)arg1 scale:(double)arg2;
- (id)_createBackgroundLayer;
- (id)_createAnimationWindow:(struct CGRect)arg1;
- (BOOL)_initializeAnimationWindowComponentsWithSource:(id)arg1 destination:(id)arg2;
//- (void)animateFrom:(id)arg1 to:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSDictionary *destinationSnapshots;
@property(copy, nonatomic) NSDictionary *sourceSnapshots;

@end

