//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import "AccountInfoTabOwner-Protocol.h"
#import "MailTableViewDelegate-Protocol.h"

@class MFSizeEngine, MailTableView, NSProgressIndicator, NSString, NSTextField, NSTimer, NSView;

@interface Quota : NSObject <AccountInfoTabOwner, MailTableViewDelegate>
{
    MailTableView *_quotaTable;
    NSTextField *_usageField;
    MFSizeEngine *_sizeEngine;
//    CDUnknownBlockType _compareUsingDescriptors;
    NSTimer *_statusTimer;
    NSView *_view;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
}

+ (id)quotaForMailAccount:(id)arg1;
@property(nonatomic) __weak NSTextField *progressField; // @synthesize progressField=_progressField;
@property(nonatomic) __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSTimer *statusTimer; // @synthesize statusTimer=_statusTimer;
//@property(readonly, copy, nonatomic) CDUnknownBlockType compareUsingDescriptors; // @synthesize compareUsingDescriptors=_compareUsingDescriptors;
@property(retain, nonatomic) MFSizeEngine *sizeEngine; // @synthesize sizeEngine=_sizeEngine;
@property(nonatomic) __weak NSTextField *usageField; // @synthesize usageField=_usageField;
@property(nonatomic) __weak MailTableView *quotaTable; // @synthesize quotaTable=_quotaTable;
//- (void).cxx_destruct;
- (void)accountInfoWillShowView:(id)arg1;
- (void)accountInfoWillHideView:(id)arg1;
- (const struct QuotaSimpleSortDescriptor *)sortDescriptorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfSortDescriptors;
- (void)engineUpdated:(id)arg1;
- (void)_stopProgress:(id)arg1;
- (void)_updateProgress:(id)arg1;
- (void)updateProgress:(id)arg1;
- (void)engineDidFinish;
- (void)engineDidStart;
- (void)_accountOfflineStatusDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSizeEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

