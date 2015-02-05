//
//  EOMessage.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOMessageStatus) {
    EOMessageStatusSent = 0,
    EOMessageStatusDelivered = 1 << 0,
    EOMessageStatusRead = 2 << 1
};

@interface EOMessage : NSObject

/*!
 Alert Digitaleo's server than this notification was delivered
 @param NSDictionary user informations
 @return EOMessage message created from userInfo if possible
 */
+ (EOMessage *)messageFromPush:(NSDictionary *)userInfo;

/*!
 Load message's data from Digitaleo's server
 @param block The block to execute
 */
+ (void)findInBackgroundWithBlock:(void (^)(NSArray *messages, NSError *error))block;

/*!
 Save asynchronously the status of message on Digitaleo's server
 */
- (void)saveStatusInBackground;

/*!
 Save asynchronously the status of message on Digitaleo's server
 @param block The block to execute
 */
- (void)saveStatusInBackgroundWithBlock:(void (^)(BOOL succeed, NSError *error))block;

/** @name Properties */

/// The id for the EOMessage.
@property (nonatomic) NSString *id;

/// The text for the EOMessage.
@property (nonatomic) NSString *text;

/// The expiration date for the EOMessage.
// @property (nonatomic) NSDate *dateExpiration;

/// The status for the EOMessage.
@property (nonatomic) EOMessageStatus status;

@end
