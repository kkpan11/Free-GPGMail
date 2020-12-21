//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSButton.h>

//#import "NSAnimationDelegate-Protocol.h"

@class NSImageView, NSString, NSViewAnimation;

@interface MailAnimatingButton : NSButton <NSAnimationDelegate>
{
    NSViewAnimation *_animation;
    NSImageView *_backImageView;
    NSImageView *_frontImageView;
}

@property(readonly, nonatomic) NSImageView *frontImageView; // @synthesize frontImageView=_frontImageView;
@property(readonly, nonatomic) NSImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) NSViewAnimation *animation; // @synthesize animation=_animation;
//- (void).cxx_destruct;
- (void)_animationDidEnd;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)setImage:(id)arg1 animates:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)_mailAnimatingButtonCommonInitWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

