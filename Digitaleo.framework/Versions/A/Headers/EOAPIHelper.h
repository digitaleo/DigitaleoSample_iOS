//
//  EORestWrapper.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOCredential.h"

typedef NS_ENUM(NSInteger, EOAPIContentType) {
    EOAPIContentTypeJSON,
    EOAPIContentTypeURLEncode
};

@interface EOAPIHelper : NSObject

///--------------------------------------
#pragma mark - Singleton
///--------------------------------------

+ (instancetype)sharedInstance;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Send request with POST HTTP method
 @param stringUrl   URL of the requested resource
 @param credential  Credential to sign request
 @param parameters  NSDictionary of parameters passed in the request
 @param contentType Content type of http body
 @param completion  Block executed with request result
 */
- (void)doPostWithUrl:(NSString*)stringUrl
           credential:(EOCredential*)credential
           parameters:(NSDictionary*)parameters
          contentType:(EOAPIContentType)contentType
           completion:(void (^)(NSDictionary *response, NSError *error))completion;

/**
 Send request with PUT HTTP method
 @param stringUrl   URL of the requested resource
 @param credential  Credential to sign request
 @param parameters  NSDictionary of parameters passed in the request
 @param contentType Content type of http body
 @param completion  Block executed with request result
 */
- (void)doPutWithUrl:(NSString*)stringUrl
          credential:(EOCredential*)credential
          parameters:(NSDictionary*)parameters
         contentType:(EOAPIContentType)contentType
          completion:(void (^)(NSDictionary *response, NSError *error))completion;

/**
 Send request with GET HTTP method
 @param stringUrl  URL of the requested resource
 @param credential Credential to sign request
 @param parameters NSDictionary of parameters passed in the request
 @param completion Block executed with request result
 */
- (void)doGetWithUrl:(NSString*)stringUrl
          credential:(EOCredential*)credential
          parameters:(NSDictionary*)parameters
          completion:(void (^)(NSDictionary *response, NSError *error))completion;

/**
 Send request with DELETE HTTP method
 @param stringUrl  URL of the requested resource
 @param credential Credential to sign request
 @param parameters NSDictionary of parameters passed in the request
 @param contentType Content type of http body
 @param completion Block executed with request result
 */
- (void)doDeleteWithUrl:(NSString*)stringUrl
             credential:(EOCredential*)credential
             parameters:(NSDictionary*)parameters
            contentType:(EOAPIContentType)contentType
             completion:(void (^)(NSDictionary *response, NSError *error))completion;

@end
