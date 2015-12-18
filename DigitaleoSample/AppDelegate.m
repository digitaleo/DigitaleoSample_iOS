//
//  AppDelegate.m
//  DigitaleoSample
//
//  Created by Clément Roulland on 29/01/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "AppDelegate.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    [self initTheme];
    
    [Digitaleo setupFramework];

    [EOLogger sharedLogger].logLevel = EOLogLevelDebug;

    self.mobileService = [[EOMobileService alloc] initWithConfiguration:EOConfiguration.defaultConfiguration];

    [EOInstallation registerForRemoteNotifications];
    
    return YES;
}

- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken {
    [[EOInstallation currentInstallation] setDeviceTokenFromData:deviceToken];
    [self.mobileService saveInstallation:[EOInstallation currentInstallation]];
}

- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error {
    [self.mobileService saveInstallation:[EOInstallation currentInstallation]];
}

- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo {
    EOMessage *message = [EOMessage messageFromPush:userInfo];
    if(message){
        [message setStatus:EOMessageStatusDelivered];
        [self.mobileService saveMessage:message];
        NSLog(@"%s %i | message.id:%@", __FUNCTION__, __LINE__,message.id);
    }
}

- (void)initTheme
{
    [[UINavigationBar appearance] setTintColor:[UIColor whiteColor]];
    [[UINavigationBar appearance] setBarTintColor:[UIColor colorWithRed:0.251 green:0.464 blue:0.776 alpha:1.000]];
    [[UINavigationBar appearance] setTitleTextAttributes:@{NSForegroundColorAttributeName: [UIColor whiteColor]}];
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
}

@end
