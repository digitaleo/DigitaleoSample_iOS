//
//  EOCustomerMasterService.h
//  Digitaleo
//
//  Created by Clément Roulland on 16/06/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "EOUser.h"
#import "EOAEndUserService.h"

@interface EOCustomerMasterService : EOAEndUserService

- (void)getUserWithCompletionHandler:(void (^)(EOUser *user, NSError *error))completionHandler;

//- (void)saveUser:(EOUser *)user completionHandler:(void (^)(BOOL success, NSError *error))completionHandler;

@end