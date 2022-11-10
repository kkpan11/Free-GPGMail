//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFLocalRecoveredOrphansUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;
+ (unsigned long long)targetVersion;
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
//- (void).cxx_destruct;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;
- (id)initWithDatabaseConnection:(id)arg1;
- (id)initWithDatabaseConnection:(id)arg1 accounts:(id)arg2;

@end

