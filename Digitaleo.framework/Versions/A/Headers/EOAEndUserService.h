//
//  EOAEndUserService.h
//  Digitaleo
//
//  Created by Clément Roulland on 28/07/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "EOAService.h"
#import "EOCredential.h"

@interface EOAEndUserService : EOAService

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Get end user token.
 Check if cached token exists and is valid, else refresh token
 @param completion Block executed with request result
 */
- (void)getEndUserTokenWithCompletion:(void (^)(EOCredential *credential, NSError *error))completion;

@end
