//
//  EOLoyaltyTransaction.h
//  Digitaleo
//
//  Created by Clément Roulland on 15/07/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOLoyaltyTransaction : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Id of LoyaltyTransaction
@property NSString *objectId;
/// Label of LoyaltyTransaction
@property NSString *label;
/// Count of LoyaltyTransaction
@property NSNumber *count;
/// Date of LoyaltyTransaction
@property NSDate   *date;
/// Event id of LoyaltyTransaction
@property NSString *eventId;
/// LoyaltyRule id of LoyaltyTransaction
@property NSString *loyaltyRuleId;
/// LoyaltyVoucher id of LoyaltyTransaction
@property NSString *loyaltyVoucherId;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init LoyaltyTransaction from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

@end
