//
//  EOTokenService.h
//  Digitaleo
//
//  Created by Clément Roulland on 04/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOCredential.h"
#import "EOConfiguration.h"

@interface EOTokenService : NSObject

///--------------------------------------
#pragma mark - Static gets/sets
///--------------------------------------

/**
 Get static sdkCredential
 */
+ (EOCredential *)sdkCredential;

/**
 Set sdkCredential
 @param credential sdkCredential
 */
+ (void)setSdkCredential:(EOCredential *)credential;

/**
 Get static endUserCredential
 */
+ (EOCredential *)endUserCredential;

/**
 Set endUserCredential
 @param credential endUserCredential
 */
+ (void)setEndUserCredential:(EOCredential *)credential;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Get SDK token with EOConfiguration.defaultConfiguration and save it for next calls
 up to credential expiration
 @param completion Block executed with request result
 */
- (void)getSDKCredentialWithCompletion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Get SDK token with passed EOConfiguration but no save
 @param configutation Configuration to use to get EOCredential
 @param completion    Block executed with request result
 */
- (void)getSDKCredentialWithConfiguration:(EOConfiguration *)configuration
                        completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Get end user token with default EOConfiguration from FacebookAccessToken and save it for next calls
 @param configutation       Configuration to use to get EOCredential
 @param facebookAccessToken Facebook accessToken
 @param completion          Block executed with request result
 */
- (void)getEndUserCredentialWithFacebookAccessToken:(NSString *)facebookAccessToken
                                  completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Get end user token with EOConfiguration from FacebookAccessToken but no save
 @param configutation       Configuration to use to get EOCredential
 @param facebookAccessToken Facebook accessToken
 @param completion          Block executed with request result
 */
- (void)getEndUserCredentialWithConfiguration:(EOConfiguration *)configuration
                          facebookAccessToken:(NSString *)facebookAccessToken
                            completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Get end user token with default EOConfiguration from username/password and save it for next calls
 @param login      Login
 @param password   Password
 @param completion Block executed with request result
 */
- (void)getEndUserCredentialWithLogin:(NSString *)login
                             password:(NSString *)password
                    completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Get end user token with EOConfiguration from username/password but no save
 @param configutation Configuration to use to get EOCredential
 @param login         Login
 @param password      Password
 @param completion    Block executed with request result
 */
- (void)getEndUserCredentialWithConfiguration:(EOConfiguration *)configuration
                                        login:(NSString *)login
                                     password:(NSString *)password
                                   completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Refresh credential with default EOConfiguration
 @param credential EOCredential to refresh
 @param completion Block executed with request result
 */
- (void)refreshCredential:(EOCredential*)credential
               completion:(void (^)(EOCredential *credential, NSError *error))completion;

/**
 Refresh credential with EOConfiguration
 @param credential    EOCredential to refresh
 @param configutation Configuration to use to get refreshed EOCredential
 @param completion    Block executed with request result
 */
- (void)refreshCredential:(EOCredential*)credential
        withConfiguration:(EOConfiguration*)configuration
               completion:(void (^)(EOCredential *credential, NSError *error))completion;

@end