//
//  EOLoyaltyOffer.h
//  Digitaleo
//
//  Created by Clément Roulland on 28/07/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOLoyaltyOfferStatus) {
    EOLoyaltyOfferStatusPending,
    EOLoyaltyOfferStatusExpired,
    EOLoyaltyOfferStatusNotBegun,
    EOLoyaltyOfferStatusAll
};

@interface EOLoyaltyOffer : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Id of LoyaltyOffer
@property NSString *objectId;
/// Name of LoyaltyOffer
@property NSString *name;
/// Label of LoyaltyOffer
@property NSString *label;
/// Desc of LoyaltyOffer
@property NSString *desc;
/// Master code of LoyaltyOffer
@property NSString *masterCode;
/// Start date of LoyaltyOffer
@property NSDate   *startDate;
/// End date of LoyaltyOffer
@property NSDate   *endDate;
/// Image uri of LoyaltyOffer
@property NSString *imageUri;
/// Thubnail uri of LoyaltyOffer
@property NSString *thumbnailUri;
/// Expiration tolerance of LoyaltyOffer
@property NSString *expirationTolerance;
/// Minimum point of LoyaltyOffer to convert into LoyaltyVoucher
@property NSNumber *minimumPoint;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init LoyaltyOffer from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

///--------------------------------------
#pragma mark - EOLoyaltyOfferStatus
///--------------------------------------

/**
 Cast status in his string value
 @param status EOLoyaltyOfferStatus
 */
+ (NSString*)stringForStatus:(EOLoyaltyOfferStatus)status;

@end
