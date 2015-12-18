//
//  Digitaleo.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
//// Common
#import "Constants.h"
#import "EOAPIHelper.h"
#import "EOAEndUserService.h"
#import "EOConfiguration.h"
//// Mobile
#import "EOMobileService.h"
#import "EOInstallation.h"
#import "EOContact.h"
#import "EOMessage.h"
// Customer Master
#import "EOCMAuthService.h"
#import "EOCMService.h"
#import "EOCMUser.h"
#import "EOCMStore.h"
#import "EOCMOptout.h"
// Loyalty
#import "EOLoyaltyService.h"
#import "EOLoyaltyInformation.h"
#import "EOLoyaltyTransaction.h"
#import "EOLoyaltyVoucher.h"
#import "EOLoyaltyOffer.h"
// Logger
#import "EOLogger.h"

@interface Digitaleo : NSObject

/**
 Setup framework with clientId and clientSecret of Digitaleo.plist
 */
+ (void)setupFramework;

/**
 Return the clientId of your application.
 */
+ (NSString *)getClientId;

/**
 Return the clientSecret of your application.
 */
+ (NSString *)getClientSecret;

@end