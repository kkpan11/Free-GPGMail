//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

@interface MCAddressManager : NSObject
{
}

+ (id)addAddressToAddressBook:(id)arg1;
+ (id)addEmailAddressToCardMatchingFirstAndLastNameFromFormattedAddress:(id)arg1;
+ (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2;
+ (id)emailAddressesFromGroup:(id)arg1;
+ (void)_addEmailsFromGroup:(id)arg1 toDictionary:(id)arg2;
+ (id)groupsMatchingString:(id)arg1;
+ (id)replaceGroupsWithUndisclosedRecipients:(id)arg1;
+ (id)expandGroups:(id)arg1;
+ (id)previousRecipientsLog;

@end

