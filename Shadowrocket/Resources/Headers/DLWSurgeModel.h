//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString;

@interface DLWSurgeModel : NSManagedObject
{
}

+ (id)fetchRequest;
- (void)delete;
- (id)localFilePath;
- (id)URL;
- (_Bool)isFileURL;

// Remaining properties
@property(copy, nonatomic) NSDate *created; // @dynamic created;
@property(copy, nonatomic) NSNumber *success; // @dynamic success;
@property(copy, nonatomic) NSDate *updated; // @dynamic updated;
@property(copy, nonatomic) NSString *url; // @dynamic url;

@end

