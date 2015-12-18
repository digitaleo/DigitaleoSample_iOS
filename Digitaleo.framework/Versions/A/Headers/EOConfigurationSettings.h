//
//  EOConfigurationSettings.h
//  Digitaleo
//
//  Created by Clément Roulland on 09/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOConfigurationSettings : NSObject

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// OAuth Client id
@property NSString *clientId;

/// OAuth Client secret
@property NSString *clientSecret;

/// Brand
@property NSString *brand;

@end