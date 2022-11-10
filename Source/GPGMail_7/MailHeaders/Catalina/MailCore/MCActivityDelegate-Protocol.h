//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MCBodyTracker-Protocol.h>
#import <MCNetworkTracker-Protocol.h>

@class MCActivity, NSError, NSOperationQueue;

@protocol MCActivityDelegate <MCBodyTracker, MCNetworkTracker>
@property(readonly, nonatomic) NSOperationQueue *serializationQueue;
- (void)activity:(MCActivity *)arg1 didEncounterError:(NSError *)arg2;
- (void)addActivity:(MCActivity *)arg1;
@end

