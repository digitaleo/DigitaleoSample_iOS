//
//  EOCMStore.h
//  Digitaleo
//
//  Created by Clément Roulland on 11/08/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOCMStore : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Id of Store
@property NSString *objectId;
/// Name of Store
@property NSString *name;
/// Address1 of Store
@property NSString *address1;
/// Address2 of Store
@property NSString *address2;
/// Zipcode of Store
@property NSString *zipCode;
/// City of Store
@property NSString *city;
/// State of Store
@property NSString *state;
/// Longitude of Store
@property double    longitude;
/// Latitude of Store
@property double    latitude;
/// Country of Store
@property NSString *country;
/// Reference of Store
@property NSString *reference;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init Store from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

@end
