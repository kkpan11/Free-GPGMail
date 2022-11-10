//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <AppKit/NSWindowController.h>

#import "AccountStatusDataSourceDelegate-Protocol.h"
//#import "NSTableViewDataSource-Protocol.h"

@class AccountStatusDataSource, MFSMTPAccount, MailTableView, NSArray, NSArrayController, NSMutableDictionary, NSOperationQueue, NSPopUpButton, NSSegmentedControl, NSString;

@interface SMTPSettings : NSWindowController <AccountStatusDataSourceDelegate, NSTableViewDataSource>
{
    NSMutableDictionary *_cachedAccountEmployment;
    NSMutableDictionary *_cachedAccountEmploymentStrings;
    NSArrayController *_deliveryAccountsController;
    MailTableView *_accountTable;
    NSSegmentedControl *_addRemoveAccountControl;
    NSPopUpButton *_tlsCertificatePopUp;
    NSOperationQueue *_keychainQueue;
    NSArray *_deliveryAccounts;
    MFSMTPAccount *_selectedDeliveryAccount;
    AccountStatusDataSource *_deliveryASDS;
}

+ (void)initialize;
@property(readonly, nonatomic) AccountStatusDataSource *deliveryASDS; // @synthesize deliveryASDS=_deliveryASDS;
@property(retain, nonatomic) MFSMTPAccount *selectedDeliveryAccount; // @synthesize selectedDeliveryAccount=_selectedDeliveryAccount;
@property(copy, nonatomic) NSArray *deliveryAccounts; // @synthesize deliveryAccounts=_deliveryAccounts;
@property(readonly, nonatomic) NSOperationQueue *keychainQueue; // @synthesize keychainQueue=_keychainQueue;
@property(nonatomic) __weak NSPopUpButton *tlsCertificatePopUp; // @synthesize tlsCertificatePopUp=_tlsCertificatePopUp;
@property(nonatomic) __weak NSSegmentedControl *addRemoveAccountControl; // @synthesize addRemoveAccountControl=_addRemoveAccountControl;
@property(nonatomic) __weak MailTableView *accountTable; // @synthesize accountTable=_accountTable;
@property(retain, nonatomic) NSArrayController *deliveryAccountsController; // @synthesize deliveryAccountsController=_deliveryAccountsController;
//- (void).cxx_destruct;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)_restoreMailAccountDefaultAccounts;
- (void)_recacheAccountEmployment;
- (void)_removeInvalidAccounts;
- (id)_defaultColumnSortDescriptor;
- (void)_updateTLSCertificateForOldAccount:(id)arg1 newAccount:(id)arg2;
- (void)dismissPanel:(id)arg1;
- (void)addRemoveAccountClicked:(id)arg1;
- (void)runSheetRelativeToWindow:(id)arg1 selectedAccount:(id)arg2;
- (void)_updateEnableRemoveAccountControl;
- (void)_updateEnableAddAccountControl;
- (void)_selectionDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidLoad;
- (id)windowNibName;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

