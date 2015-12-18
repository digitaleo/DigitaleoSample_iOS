//
//  EOParameters.h
//  Digitaleo
//
//  Created by Clément Roulland on 30/11/2015.
//  Copyright © 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOParameter) {
    EOParameterAllowSelfie = 1,
    EOParameterAllowCheckin,
    EOParameterAllowSponsor,
    EOParameterAllowPhysicalCard,
};

@interface EOParameters : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init Parameters from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIArray:(NSArray *)array;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Get boolean value of Boolean parameter
 Throw Exception if parameter is not a boolean parameter
 @param parameter Parameter to get value
 */
- (Boolean)getBooleanParameter:(EOParameter)parameter;

@end