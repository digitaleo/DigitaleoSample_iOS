//
//  Digitaleo.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EOInstallation.h"
#import "EOContact.h"
#import "EOMessage.h"

@interface Digitaleo : NSObject

/*!
 Setup framework with clientId and clientSecret of Digitaleo.plist
 */
+ (void)setupFramework;

/*!
 Return the clientId of your application.
 */
+ (NSString *)getClientId;

/*!
 Return the clientSecret of your application.
 */
+ (NSString *)getClientSecret;

@end
