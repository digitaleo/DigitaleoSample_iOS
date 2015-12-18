//
//  EOCMUser.h
//  Digitaleo
//
//  Created by Clément Roulland on 16/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOLoyaltyInformation.h"
#import "EOCMUserStoreInformation.h"


@interface EOCMUser : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Id of User
@property NSString *objectId;
/// FirstName of user
@property NSString *firstName;
/// LastName of user
@property NSString *lastName;
/// Address1 of user
@property NSString *address1;
/// Address1 of user
@property NSString *address2;
/// Birthdate of user
@property NSDate   *birthdate;
/// Civility of user
@property NSString *civility;
/// City of user
@property NSString *city;
/// Country of user
@property NSString *country;
/// Email of user
@property NSString *email;
/// Fax number of user
@property NSString *fax;
/// Facebook id of user
@property NSString *facebookId;
/// Twitter id of user
@property NSString *twitterId;
/// Last known latitude of user
@property NSString *latitude;
/// Last known longitude of user
@property NSString *longitude;
/// Mobile number of user
@property NSString *mobile;
/// Phone number of user
@property NSString *phone;
/// State of user
@property NSString *state;
/// Zipcode of user
@property NSString *zipCode;
/// Avatar string url of user
@property NSString *avatar;
/// Loyalty object attached to user
@property EOLoyaltyInformation *loyalty;
/// Store information object attached to user
@property EOCMUserStoreInformation *store;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init User from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Return user object as dictionary
 */
- (NSDictionary*)dictionaryToPut;

@end
