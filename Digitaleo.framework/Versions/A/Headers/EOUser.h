//
//  EOUser.h
//  Digitaleo
//
//  Created by Clément Roulland on 16/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOLoyaltyInformation.h"

@interface EOUser : NSObject <NSCoding>

@property NSString *objectId;
@property NSString *firstName;
@property NSString *lastName;
@property NSString *address1;
@property NSString *address2;
@property NSDate   *birthdate;
@property NSString *civility;
@property NSString *city;
@property NSString *country;
@property NSString *email;
@property NSString *fax;
@property NSString *facebookId;
@property NSString *twitterId;
@property NSString *latitude;
@property NSString *longitude;
@property NSString *mobile;
@property NSString *phone;
@property NSString *state;
@property NSString *zipCode;
@property NSString *avatar;
@property EOLoyaltyInformation *loyalty;

- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

@end
