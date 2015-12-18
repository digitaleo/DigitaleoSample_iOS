//
//  EOCMUserStoreInformation.h
//  Digitaleo
//
//  Created by Vincent Lainé on 24/11/2015.
//  Copyright © 2015 Digitaleo. All rights reserved.
//

#ifndef EOCMUserStoreInformation_h
#define EOCMUserStoreInformation_h

@interface EOCMUserStoreInformation : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

@property NSString *storeReferenceCode;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init StoreInformation from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

@end
#endif /* EOCMUserStoreInformation_h */
