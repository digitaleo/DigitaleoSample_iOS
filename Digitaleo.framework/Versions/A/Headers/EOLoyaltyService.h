//
//  EOLoyaltyService.h
//  Digitaleo
//
//  Created by Clément Roulland on 15/07/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "EOAEndUserService.h"
#import "EOLoyaltyVoucher.h"
#import "EOLoyaltyOffer.h"

@interface EOLoyaltyService : EOAEndUserService

///--------------------------------------
#pragma mark - LoyaltyTransaction
///--------------------------------------

/**
 Get array of LoyaltyTransactions
 @param completion Block called with result of request
 */
- (void)getLoyaltyTransactionsWithCompletion:(void (^)(NSArray *loyaltyTransactions, NSError *error))completion;

///--------------------------------------
#pragma mark - LoyaltyOffer
///--------------------------------------

/**
 Get array of LoyaltyOffers
 @param offerStatus Status of LoyaltyOffers to get
 @param completion  Block called with result of request
 */
- (void)getLoyaltyOffersWithStatus:(EOLoyaltyOfferStatus)offerStatus
                        completion:(void (^)(NSArray *loyaltyOffers, NSError *error))completion;

///--------------------------------------
#pragma mark - LoyaltyVoucher
///--------------------------------------

/**
 Get array of LoyaltyVouchers
 @param voucherStatus Status of LoyaltyVouchers to get
 @param completion    Block called with result of request
 */
- (void)getLoyaltyVouchersWithStatus:(EOLoyaltyVoucherStatus)voucherStatus
                          completion:(void (^)(NSArray *loyaltyVouchers, NSError *error))completion;

/**
 Generate LoyaltyVoucher from LoyaltyOffer
 @param loyaltyOffer LoyaltyOffer to use to generate LoyaltyVoucher
 @param completion   Block called with result of request
 */
- (void)createLoyaltyVoucherWithOffer:(EOLoyaltyOffer*)loyaltyOffer
                           completion:(void (^)(EOLoyaltyVoucher *loyaltyVoucher, NSError *error))completion;

///--------------------------------------
#pragma mark - PhysicalCard
///--------------------------------------

/**
 Link physical card from its number
 @param physicalCardNumber Number of physical card to link with current user fidelity account
 @param completion         Block called with result of request
 */
- (void)linkPhysicalCard:(NSString*)physicalCardNumber
              completion:(void (^)(NSError *error))completion;

///--------------------------------------
#pragma mark - StoreReference
///--------------------------------------

/**
 Save store as reference for current user
 @param storeReferenceCode Code of store to set as reference
 @param completion         Block called with result of request
 */
- (void)saveStoreReference:(NSString*)storeReferenceCode
                completion:(void (^)(NSError *error))completion;

///--------------------------------------
#pragma mark - Sponsor
///--------------------------------------

/**
 Save sponsor from his sponsorCode
 @param sponsorCode Sponsor code
 @param completion  Block called with result of request
 */
- (void)saveSponsor:(NSString*)sponsorCode
         completion:(void (^)(NSError *error))completion;

@end