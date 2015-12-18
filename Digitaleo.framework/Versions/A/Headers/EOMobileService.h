//
//  EOMobileService.h
//  Digitaleo
//
//  Created by Clément Roulland on 08/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "EOAService.h"
#import "EOInstallation.h"
#import "EOMessage.h"
#import "EOContact.h"
#import "EOParameters.h"

@interface EOMobileService : EOAService


///--------------------------------------
#pragma mark - Installation
///--------------------------------------

/**
 Save installation asynchronously
 @param installation EOInstallation to save
 */
- (void)saveInstallation:(EOInstallation *)installation;
/**
 Save installation asynchronously with block
 @param installation EOInstallation to save
 @param completion   Block executed with request result
 */
- (void)saveInstallation:(EOInstallation *)installation
              completion:(void (^)(BOOL succeed, NSError *error))completion;


///--------------------------------------
#pragma mark - Message
///--------------------------------------

/**
 Get messages asynchronously with block
 If messageIds empty, return all messages
 @param messageIds Array of message ids to load from server
 @param completion Block executed with request result
 */
- (void)getMessages:(NSArray *)messageIds
         completion:(void (^)(NSArray *messages, NSError *error))completion;
/**
 Save message asynchronously
 @param message Message to save
 */
- (void)saveMessage:(EOMessage *)message;
/**
 Save message asynchronously with block
 @param message    Message to save
 @param completion Block executed with request result
 */
- (void)saveMessage:(EOMessage *)message
         completion:(void (^)(BOOL succeed, NSError *error))completion;


///--------------------------------------
#pragma mark - Contact
///--------------------------------------

/**
 Get contactData asynchronously with block
 @param contactId  Contact id to load
 @param completion Block executed with request result
 */
- (void)getContactData:(NSNumber *)contactId
            completion:(void (^)(NSDictionary *contactData, NSError *error))completion;
/**
 Save contact asynchronously
 @param contact Contact to save
 */
- (void)saveContact:(EOContact *)contact;
/**
 Save contact asynchronously with block
 @param contact    Contact to save
 @param completion Block executed with request result
 */
- (void)saveContact:(EOContact *)contact
         completion:(void (^)(BOOL succeed, NSError *error))completion;


///--------------------------------------
#pragma mark - Parameters
///--------------------------------------

/**
 Get parameters asynchronously with block
 @param completion Block executed with request result
 */
- (void)getParametersWithCompletion:(void (^)(EOParameters *parametersValues, NSError *error))completion;

@end
