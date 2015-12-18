//
//  EOAuthenticationService.h
//  Digitaleo
//
//  Created by Clément Roulland on 19/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Digitaleo/Digitaleo.h>

@interface EOAuthenticationService : EOAPIHelper


+ (EOCredential *)endUserCredential;

- (void)logInFromFacebookToken:(NSString *)facebookToken
             completionHandler:(void (^)(EOCredential *credential, NSError *error))completionHandler;

- (void)signUpUserWithFBTokenForBusiness:(NSString *)fbTokenForBusiness
                           fbAccessToken:(NSString *)fbAccessToken
                                   email:(NSString *)email
                                lastName:(NSString *)lastName
                               firstName:(NSString *)firstName
                       completionHandler:(void (^)(EOCredential *credential, NSError *error))completionHandler;

- (void)logInFromLogin:(NSString *)login
              password:(NSString *)password
     completionHandler:(void (^)(EOCredential *credential, NSError *error))completionHandler;

- (void)signUpUserWithLogin:(NSString *)login
                   password:(NSString *)password
                      email:(NSString *)email
                   lastName:(NSString *)lastName
                  firstName:(NSString *)firstName
          completionHandler:(void (^)(EOCredential *credential, NSError *error))completionHandler;

- (void)logOut;

@end
