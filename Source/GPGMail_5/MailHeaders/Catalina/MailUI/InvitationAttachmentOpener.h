//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TemporaryAttachmentOpener.h"

@interface InvitationAttachmentOpener : TemporaryAttachmentOpener
{
    BOOL _openImmediately;
}

@property(readonly, nonatomic) BOOL openImmediately; // @synthesize openImmediately=_openImmediately;
- (void)beginSaveOfAttachments:(id)arg1 toTemporaryFolderWithName:(id)arg2 taskName:(id)arg3;
- (void)_saveAttachmentsToICalCaches:(id)arg1;
- (id)initWithAttachmentViewControllers:(id)arg1 applicationPath:(id)arg2;
- (id)initWithAttachmentViewControllers:(id)arg1 openImmediately:(BOOL)arg2;

@end

