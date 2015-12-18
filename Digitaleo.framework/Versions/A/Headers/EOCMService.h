//
//  EOCMService.h
//  Digitaleo
//
//  Created by Clément Roulland on 16/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "EOCMUser.h"
#import "EOAEndUserService.h"
#import "EOCMOptout.h"

@interface EOCMService : EOAEndUserService

///--------------------------------------
#pragma mark - User
///--------------------------------------

/**
 Get connected EOCMUser
 @param completion Block called with result of request
 */
- (void)getUserWithCompletion:(void (^)(EOCMUser *user, NSError *error))completion;

/**
 Update connected EOCMUser
 @param user       Updated user to save
 @param completion Block called with result of request
 */
- (void)updateUser:(EOCMUser*)user
        completion:(void (^)(NSError *error))completion;

///--------------------------------------
#pragma mark - Optout
///--------------------------------------

/**
 Get optouts of connected EOCMUser
 @param completion Block called with result of request
 */
- (void)getOptoutsWithCompletion:(void (^)(NSArray* cmOptouts, NSError *error))completion;

/**
 Optout a media of the connected EOCMUser
 @param media      Media to optout
 @param completion Block called with result of request
 */
- (void)createOptoutForMedia:(EOCMOptoutMedia)media
                  completion:(void (^)(NSError *error))completion;

/**
 Optin a media of the connected EOCMUser
 @param media      Media to optin
 @param completion Block called with result of request
 */
- (void)deleteOptoutForMedia:(EOCMOptoutMedia)media
                  completion:(void (^)(NSError *error))completion;

///--------------------------------------
#pragma mark - Store
///--------------------------------------

/**
 Get Stores with location.
 If latitude or longitude are nil, return all stores
 @param latitude   Latitude to search nearest stores
 @param longitude  Longitude to search nearest stores
 @param completion Block called with result of request
 */
- (void)getStoresWithLatitude:(double)latitude
                    longitude:(double)longitude
                   completion:(void (^)(NSArray* cmStores, NSError *error))completion;

///--------------------------------------
#pragma mark - Check-in
///--------------------------------------

/**
 Send check-in event
 Latitude and longitude may be nil
 @param person     User to check-in
 @param latitude   Latitude to check-in
 @param longitude  Longitude to check-in
 @param completion Block called with result of request
 */
- (void)doCheckInWithPerson:(EOCMUser*)person
                   latitude:(double)latitude
                  longitude:(double)longitude
                 completion:(void (^)(NSError *error))completion;

///--------------------------------------
#pragma mark - Selfie
///--------------------------------------

/**
 Send selfie event
 @param person     User to send selfie event
 @param completion Block called with result of request
 */
- (void)doSelfieWithPerson:(EOCMUser*)person
                completion:(void (^)(NSError *error))completion;

@end