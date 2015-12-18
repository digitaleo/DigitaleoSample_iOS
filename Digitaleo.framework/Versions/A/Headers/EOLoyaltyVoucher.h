//
//  EOLoyaltyVoucher.h
//  Digitaleo
//
//  Created by Clément Roulland on 28/07/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOLoyaltyVoucherStatus) {
    EOLoyaltyVoucherStatusUsable,
    EOLoyaltyVoucherStatusAlreadyUsed,
    EOLoyaltyVoucherStatusExpired,
    EOLoyaltyVoucherStatusNotYetUsable,
    EOLoyaltyVoucherStatusAll
};

@interface EOLoyaltyVoucher : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Id of LoyaltyVoucher
@property NSString *objectId;
/// Name of LoyaltyVoucher
@property NSString *name;
/// Label of LoyaltyVoucher
@property NSString *label;
/// Description of LoyaltyVoucher
@property NSString *desc;
/// Master code of LoyaltyVoucher
@property NSString *masterCode;
/// Terms of LoyaltyVoucher
@property NSString *terms;
/// Start date of LoyaltyVoucher
@property NSDate   *startDate;
/// End date of LoyaltyVoucher
@property NSDate   *endDate;
/// Burn date of LoyaltyVoucher
@property NSDate   *burnDate;
/// Image uri of LoyaltyVoucher
@property NSString *imageUri;
/// Code of LoyaltyVoucher
@property NSString *code;
/// Status of LoyaltyVoucher
@property EOLoyaltyVoucherStatus status;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init LoyaltyVoucher from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

///--------------------------------------
#pragma mark - EOLoyaltyVoucherStatus
///--------------------------------------

/**
 Get status of LoyaltyVoucher in string
 */
- (NSString*)statusString;

/**
 Cast status in his string value
 @param status EOLoyaltyOfferStatus
 */
+ (NSString*)stringForStatus:(EOLoyaltyVoucherStatus)status;

@end
