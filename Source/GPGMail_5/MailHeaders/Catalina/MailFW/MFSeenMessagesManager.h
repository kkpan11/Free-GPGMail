//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@class NSArray, NSManagedObject, NSManagedObjectContext;

@interface MFSeenMessagesManager : NSObject
{
    NSManagedObject *_account;
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)_managedObjectContext;
+ (BOOL)migrateAccountFromAccountUID:(id)arg1 toSystemAccountIdentifier:(id)arg2 error:(id *)arg3;
+ (void)closeSeenMessageStore;
+ (id)_sharedSeenMessagesStore;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) NSManagedObject *account; // @synthesize account=_account;
//- (void).cxx_destruct;
- (void)saveChanges;
- (void)removeMessagesNotOnServer:(id)arg1;
- (void)removeServerDeletedMessages;
@property(readonly, copy, nonatomic) NSArray *messagesToBeDeletedFromServer;
@property(readonly, copy, nonatomic) NSArray *seenMessages;
- (void)removeMessageIDs:(id)arg1;
- (id)addMessageID:(id)arg1 dateSeen:(id)arg2;
@property(readonly, nonatomic) unsigned long long countOfSeenMessages;
- (id)seenMessageForMessageID:(id)arg1;
- (id)_addAccountWithID:(id)arg1;
- (id)_accountForAccountID:(id)arg1;
- (id)init;
- (id)initWithAccountID:(id)arg1 createAccount:(BOOL)arg2;

@end

