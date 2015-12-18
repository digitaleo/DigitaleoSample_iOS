//
//  EOLoyaltyInformation.h
//  Digitaleo
//
//  Created by Clément Roulland on 29/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOLoyaltyInformation : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Loylaty member id
@property NSString *memberId;
/// Loyalty program id
@property NSString *programId;
/// Number of points of this loyalty member
@property NSNumber *points;
/// Virtual card number of this loyalty member
@property NSString *virtualCardNumber;
/// Physical card number of this loyalty member
@property NSString *physicalCardNumber;
/// FirstName of sponsor of this loyalty member
@property NSString *sponsorFirstName;
/// LastName of sponsor of this loyalty member
@property NSString *sponsorLastName;
/// Id of sponsor of this loyalty member
@property NSString *sponsorId;
/// Sponsor code of this loyalty member
@property NSString *mySponsorCode;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init LoyaltyInformation from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

@end