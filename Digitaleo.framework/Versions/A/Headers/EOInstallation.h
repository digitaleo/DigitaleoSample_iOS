//
//  EOInstallation.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOInstallation : NSObject

/*!
 Gets the currently-running installation from disk and returns an instance of
 it. If this installation is not stored on disk, returns an EOInstallation
 with deviceType and installationId fields set to those of the
 current installation.
 @result Returns an EOInstallation that represents the currently-running
 installation.
 */
+ (EOInstallation *)currentInstallation;

/*!
 Request APNS registration to be able to receive push notifications
 */
+ (void)registerForRemoteNotifications;

/*!
 Sets the device token string property from an NSData-encoded token.
 */
- (void)setDeviceTokenFromData:(NSData *)deviceTokenData;

/*!
 Save asynchronously the instance of installation on Digitaleo's server
 */
- (void)saveInBackground;

/*!
 Save asynchronously the instance of installation on Digitaleo's server
 @param block The block to execute
 */
- (void)saveInBackgroundWithBlock:(void (^)(BOOL succeed, NSError *error))block;

/** @name Properties */

/// The device type for the EOInstallation.
@property (nonatomic, readonly) NSString *deviceType;

/// The installationId for the EOInstallation.
@property (nonatomic, readonly) NSString *installationId;

/// The appIdentifier for the EOInstallation.
@property (nonatomic, readonly) NSString *appIdentifier;

/// The appName for the EOInstallation.
@property (nonatomic, readonly) NSString *appName;

/// The appVersion for the EOInstallation.
@property (nonatomic, readonly) NSString *appVersion;

/// The appVersion for the EOInstallation.
@property (nonatomic, readonly) NSString *sdkVersion;

/// The device token for the EOInstallation.
@property (nonatomic) NSString *deviceToken;

/// The badge for the EOInstallation.
@property (nonatomic) NSInteger badge;

/// The timeZone for the EOInstallation.
@property (nonatomic, readonly) NSString *timeZone;

@end
