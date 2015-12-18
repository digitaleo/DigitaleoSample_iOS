//
//  EOAService.h
//  Digitaleo
//
//  Created by Clément Roulland on 14/08/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOConfiguration.h"
#import "EOTokenService.h"
#import "EOAPIHelper.h"

@interface EOAService : NSObject

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// configuration used to make API calls
@property (readonly) EOConfiguration *configuration;
/// token service used to sign API calls
@property (readonly) EOTokenService *tokenService;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init with configuration
 @param configuration EOConfiguration to use to make API calls
 */
- (id)initWithConfiguration:(EOConfiguration *)configuration;

@end