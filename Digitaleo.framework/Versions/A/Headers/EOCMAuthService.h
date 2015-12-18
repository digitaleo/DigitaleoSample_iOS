//
//  EOCMAuthService.h
//  Digitaleo
//
//  Created by Clément Roulland on 19/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Digitaleo/Digitaleo.h>

@interface EOCMAuthService : EOAService

///--------------------------------------
#pragma mark - Facebook
///--------------------------------------


/**
 LogIn user from facebook
 @param facebookToken Facebook token
 @param completion    Block called with result of request
 */
- (void)logInFromFacebookToken:(NSString *)facebookToken
                    completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 SignUp user from facebook
 @param fbTokenForBusiness Facebook token for business
 @param fbAccessToken      Facebook access token
 @param email              Email of new user
 @param lastName           LastName of new user
 @param firstName          FirstName of new user
 @param completion         Block called with result of request
 */
- (void)signUpUserWithFBTokenForBusiness:(NSString *)fbTokenForBusiness
                           fbAccessToken:(NSString *)fbAccessToken
                                   email:(NSString *)email
                                lastName:(NSString *)lastName
                               firstName:(NSString *)firstName
                              completion:(void (^)(EOCredential *credential, NSError *error))completion;

///--------------------------------------
#pragma mark - Login/Password
///--------------------------------------

/**
 LogIn user from login/password tuple
 @param login      Login of new user
 @param password   Password of new user
 @param completion Block called with result of request
 */
- (void)logInFromLogin:(NSString *)login
              password:(NSString *)password
            completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 SignUp user from login/password tuple
 @param login      Login of new user
 @param password   Password of new user
 @param email      Email of new user
 @param lastName   LastName of new user
 @param firstName  FirstName of new user
 @param completion Block called with result of request
 */
- (void)signUpUserWithLogin:(NSString *)login
                   password:(NSString *)password
                      email:(NSString *)email
                   lastName:(NSString *)lastName
                  firstName:(NSString *)firstName
                 completion:(void (^)(EOCredential *credential, NSError *error))completion;

///--------------------------------------
#pragma mark - Logout
///--------------------------------------

/**
 Logour connected user
 */
- (void)logout;

@end
