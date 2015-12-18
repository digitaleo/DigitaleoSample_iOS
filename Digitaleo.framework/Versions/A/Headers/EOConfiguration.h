//
//  EOConfiguration.h
//  Digitaleo
//
//  Created by Clément Roulland on 09/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOConfigurationSettings.h"

@interface EOConfiguration : NSObject

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Url of Mobile Digitaleo API
@property NSString *mobileUrl;

/// Url of OAuth Digitaleo API
@property NSString *oAuthUrl;

/// Url of CustomerMaster Digitaleo API
@property NSString *customerMasterUrl;

/// Url of Loyalty Digitaleo API
@property NSString *loyaltyUrl;

/// Settings to use (clientId, clientSecret)
@property EOConfigurationSettings *settings;

///--------------------------------------
#pragma mark - Static gets/sets
///--------------------------------------

/**
 Return default configuration
 */
+ (EOConfiguration *)defaultConfiguration;

/**
 Set static default configuration
 */
+ (void)setDefaultConfiguration:(EOConfiguration *)configuration;

@end
