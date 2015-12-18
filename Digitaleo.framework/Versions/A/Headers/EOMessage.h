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

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// The server status for the EOMessage.
@property (nonatomic) EOMessageStatus serverStatus;

/// The id for the EOMessage.
@property (nonatomic) NSString *id;

/// The text for the EOMessage.
@property (nonatomic) NSString *text;

/// The expiration date for the EOMessage.
// @property (nonatomic) NSDate *dateExpiration;

/// The status for the EOMessage.
@property (nonatomic) EOMessageStatus status;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Alert Digitaleo's server than this notification was delivered
 @param NSDictionary user informations
 @return EOMessage message created from userInfo if possible
 */
+ (EOMessage *)messageFromPush:(NSDictionary *)userInfo;

@end
