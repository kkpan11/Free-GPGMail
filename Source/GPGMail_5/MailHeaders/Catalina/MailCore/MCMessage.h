//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <objc/NSObject.h>

#import <ECMessage-Protocol.h>
#import <EDIndexableMessage-Protocol.h>
#import <MCMessageSortingInterface-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MCDisplayNameInfo, MCMimePart, NSArray, NSColor, NSDate, NSDictionary, NSMutableSet, NSSet, NSString, NSUUID;
@protocol ECMessageHeaders, ECMimePart, MCMailAccount, MCMailbox, MCMessageDataSource;

@interface MCMessage : NSObject <MCMessageSortingInterface, ECMessage, EDIndexableMessage>
{
    ECSubject *_subject;
    NSArray *_toRecipients;
    NSArray *_ccRecipients;
    NSArray *_bccRecipients;
    NSString *_sender;
    ECAngleBracketIDHash *_messageIDHeaderHash;
    NSUUID *_documentID;
//    CDStruct_7ad7028e _messageColor;
    BOOL _type;
    double _dateSentInterval;
    double _dateReceivedInterval;
    double _dateLastViewedInterval;
    ECAngleBracketIDHash *_listIDHash;
//    id /*<MCMessageDataSource>*/ _dataSource;
    // Error parsing type: Aq, name: _messageFlags
    unsigned long long _conversationFlags;
    NSMutableSet *_gmailLabels;
    BOOL _markedForOverwrite;
    BOOL _recipientType;
    BOOL _primitiveMessageType;
//    long long _conversationID;
    double _primitiveDateSentInterval;
    double _primitiveDateReceivedInterval;
    double _primitiveDateLastViewedInterval;
}

+ (BOOL)isMessageURLString:(id)arg1;
+ (long long)displayablePriorityForPriority:(long long)arg1;
+ (long long)validatePriority:(long long)arg1;
//+ (BOOL)messageColorIsValid:(CDStruct_7ad7028e)arg1;
+ (BOOL)allMessages:(id)arg1 areSameType:(BOOL)arg2;
+ (id)unreadMessagesFromMessages:(id)arg1;
+ (BOOL)_messageTypeForMessageTypeKey:(id)arg1;
+ (id)messageTypeKeyForMessageType:(BOOL)arg1;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)messageWithRFC822Data:(id)arg1 sanitizeData:(BOOL)arg2;
@property double primitiveDateLastViewedInterval; // @synthesize primitiveDateLastViewedInterval=_primitiveDateLastViewedInterval;
@property double primitiveDateReceivedInterval; // @synthesize primitiveDateReceivedInterval=_primitiveDateReceivedInterval;
@property double primitiveDateSentInterval; // @synthesize primitiveDateSentInterval=_primitiveDateSentInterval;
@property BOOL primitiveMessageType; // @synthesize primitiveMessageType=_primitiveMessageType;
@property BOOL recipientType; // @synthesize recipientType=_recipientType;
@property BOOL markedForOverwrite; // @synthesize markedForOverwrite=_markedForOverwrite;
@property(readonly) long long conversationID; // @synthesize conversationID=_conversationID;
//- (void).cxx_destruct;
@property(retain, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly, copy, nonatomic) NSArray *references;
@property(readonly, nonatomic) id /*<ECMessageHeaders>*/ headers;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
- (id)bestAlternativePart:(char *)arg1;
@property(readonly, nonatomic) id /*<ECMimePart>*/ bodyPart;
- (id)imageArchiveURL;
- (void)_updateAttributeSet:(id)arg1 includingHTML:(BOOL)arg2 withMessageBody:(id)arg3 orderedAttachments:(id *)arg4;
- (id)_uniqueIdentifierForSearchableItemUsingIdentifier:(id)arg1 useHeadersIfNecessary:(BOOL)arg2;
@property(readonly, nonatomic) NSString *uniqueIdentifierForSearchableItem;
- (id)_searchableItemWithHTML:(id)arg1 messageBody:(id)arg2 updatableAttributesOnly:(BOOL)arg3 outOrderedAttachments:(id *)arg4;
- (id)searchableItemWithHTML:(id)arg1 messageBody:(id)arg2 updatableAttributesOnly:(BOOL)arg3;
- (void)setAttachmentMetadata:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
@property(readonly, nonatomic) MCMimePart *topLevelMimePart;
- (BOOL)_calculateAttachmentInfoFromTopLevelMimePart:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4 force:(BOOL)arg5;
- (BOOL)calculateAttachmentInfoFromTopLevelMimePart:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4;
- (void)setAttachmentInfoFromTopLevelMimePart:(id)arg1;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, copy) NSArray *listUnsubscribe;
- (id)URLStringWithHeaders:(id)arg1;
@property(readonly, copy, nonatomic) NSString *URLStringIfAvailable;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)_URLStringWithHeaders:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSString *remoteMailboxURLString;
@property(readonly, nonatomic) id /*<MCMailAccount>*/ account;
@property(readonly, copy, nonatomic) NSString *path;
//@property(readonly) CDStruct_7ad7028e messageColor;
@property(readonly, nonatomic) unsigned int uid;
@property(readonly, copy) NSString *remoteID;
@property(readonly, copy) NSArray *referencesHashes;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 sender:(id)arg4 type:(BOOL)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderHash:(id)arg8 dateLastViewedTimeIntervalSince1970:(double)arg9;
- (BOOL)junk;
- (BOOL)read;
- (BOOL)answered;
- (BOOL)flagged;
@property(copy) NSArray *bcc;
@property(copy) NSArray *cc;
@property(copy) NSArray *to;
@property(readonly, nonatomic) MCDisplayNameInfo *senderDisplayNameInfo;
@property(readonly, copy, nonatomic) NSString *senderDisplayName;
@property(readonly, copy) NSString *senderIfAvailable;
@property(readonly, copy) NSArray *senders;
@property(copy) NSString *sender;
@property(readonly, copy) NSArray *from;
@property double dateLastViewedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateLastViewed;
@property double dateSentAsTimeIntervalSince1970;
@property(readonly) NSDate *dateSent;
@property double dateReceivedAsTimeIntervalSince1970;
@property(readonly) NSDate *dateReceived;
@property(copy) ECSubject *subject;
@property(readonly, copy) ECSubject *subjectIfAvailable;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(BOOL)arg2;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (id)rawSourceFromHeaders:(id)arg1 body:(id)arg2;
@property(readonly, nonatomic) long long priority;
- (void)setPriorityFromHeaders:(id)arg1;
@property(readonly, nonatomic) long long junkMailLevel;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL hasCalculatedNumberOfAttachments;
@property(readonly, nonatomic) BOOL isPartialMessageBodyAvailable;
@property(readonly, nonatomic) BOOL isMessageContentLocallyAvailable;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly, nonatomic) BOOL isReply;
@property(retain) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(readonly, nonatomic) unsigned long long messageSize;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
- (void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;
@property BOOL colorHasBeenEvaluated;
- (void)setPrimitiveColorHasBeenEvaluated:(BOOL)arg1;
@property(copy) NSColor *color;
- (void)setPrimitiveColorIntValue:(int)arg1;
- (void)setPrimitiveColor:(id)arg1;
@property(readonly, nonatomic) unsigned char flagColorSet;
@property(readonly, nonatomic) int colorForSort;
@property(readonly, nonatomic) int colorIntValue;
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;
- (void)removeGmailLabels:(id)arg1;
- (void)addGmailLabels:(id)arg1;
@property(retain) NSSet *gmailLabels;
@property(readonly) NSSet *labels;
- (void)setPrimitiveConversationFlags:(unsigned long long)arg1;
- (void)setConversationFlags:(unsigned long long)arg1;
- (unsigned long long)primitiveConversationFlags;
@property(readonly) unsigned long long conversationFlags;
- (void)setPrimitiveMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, nonatomic) long long primitiveMessageFlags;
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly, nonatomic) long long messageFlags;
@property(copy) NSUUID *documentID;
@property(readonly, nonatomic) BOOL isMessageMeeting;
@property(readonly, nonatomic) BOOL isEditable;
@property BOOL type;
- (id)bodyFetchIfNotAvailable:(BOOL)arg1 updateFlags:(BOOL)arg2 allowPartial:(BOOL)arg3 skipSignatureVerification:(BOOL)arg4;
- (id)bodyFetchIfNotAvailable:(BOOL)arg1 updateFlags:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)headersFetchIfNotAvailable:(BOOL)arg1;
@property(readonly, nonatomic) id /*<MCMailbox>*/ mailbox;
@property(readonly, nonatomic) BOOL dataSourceShouldBeSet;
@property(readonly, nonatomic) __weak id /*<MCMessageDataSource>*/ primitiveDataSource;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

