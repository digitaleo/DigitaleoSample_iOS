//
//  AppDelegate.h
//  DigitaleoSample
//
//  Created by Clément Roulland on 29/01/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Digitaleo/Digitaleo.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property EOMobileService *mobileService;

@end

