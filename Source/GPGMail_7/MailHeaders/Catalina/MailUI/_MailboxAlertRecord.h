//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class MFMailbox;

@interface _MailboxAlertRecord : NSObject
{
    BOOL _userInitiated;
    MFMailbox *_mailbox;
}

@property(readonly, nonatomic) BOOL userInitiated; // @synthesize userInitiated=_userInitiated;
@property(readonly, nonatomic) MFMailbox *mailbox; // @synthesize mailbox=_mailbox;
//- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMailbox:(id)arg1 userInitiated:(BOOL)arg2;

@end

