//
//  EOCredential.h
//  Digitaleo
//
//  Created by Clément Roulland on 04/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOCredential : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// The OAuth access token.
@property (readonly) NSString *accessToken;

/// The OAuth token type (e.g. "bearer").
@property (readonly) NSString *tokenType;

/// The OAuth refresh token.
@property (readonly) NSString *refreshToken;

/// Whether the OAuth credentials are expired.
@property (readonly, getter = isExpired) BOOL expired;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init EOCredential instance with data
 @param accessToken  Access token
 @param expiresIn    Time in second before credential expiration
 @param tokenType    Token type (e.g. "Bearer")
 @param refreshToken Refresh token
 */
- (instancetype)initWithAccessToken:(NSString *)accessToken
                          expiresIn:(NSNumber *)expiresIn
                          tokenType:(NSString *)tokenType
                       refreshToken:(NSString *)refreshToken;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Return formatted string to send in Authorization request parameter
 */
- (NSString *)HTTPHeaderString;

@end