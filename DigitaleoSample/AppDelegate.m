//
//  AppDelegate.m
//  DigitaleoSample
//
//  Created by Clément Roulland on 29/01/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "AppDelegate.h"
#import <Digitaleo/Digitaleo.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [self initTheme];
    
    [Digitaleo setupFramework];
    [EOInstallation registerForRemoteNotifications];
    
    return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
    [[EOInstallation currentInstallation] setDeviceTokenFromData:deviceToken];
    [[EOInstallation currentInstallation] saveInBackground];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error {
    [[EOInstallation currentInstallation] saveInBackground];
}

- (void)initTheme
{
    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setBarTintColor:[UIColor colorWithRed:0.251 green:0.464 blue:0.776 alpha:1.000]];
    [[UINavigationBar appearance] setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor whiteColor]}];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
}

@end
