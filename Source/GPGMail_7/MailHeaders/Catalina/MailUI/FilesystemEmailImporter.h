//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmailImporter.h"

@class NSSet;

@interface FilesystemEmailImporter : EmailImporter
{
}

- (BOOL)isValidMailbox:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *pathExtensions;
- (void)readMailbox:(id)arg1 intoMailbox:(id)arg2;
- (void)processUserSelection;
- (void)prepareForImport;

@end

