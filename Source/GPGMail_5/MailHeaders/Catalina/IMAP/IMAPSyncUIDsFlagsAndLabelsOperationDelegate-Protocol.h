//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <IMAP/NSObject-Protocol.h>

@class IMAPSyncUIDsFlagsAndLabelsOperation, NSArray, NSIndexSet;

@protocol IMAPSyncUIDsFlagsAndLabelsOperationDelegate <NSObject>
- (void)syncUIDsOperationFinished:(IMAPSyncUIDsFlagsAndLabelsOperation *)arg1 withFetchResponses:(NSArray *)arg2 vanishedUIDs:(NSIndexSet *)arg3;
@end

