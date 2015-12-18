//
//  EOParametersValues.h
//  Digitaleo
//
//  Created by Clément Roulland on 30/11/2015.
//  Copyright © 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOParametersValue) {
    EOParametersValueAllowSelfie = 1,
    EOParametersValueAllowCheckin,
    EOParametersValueAllowSponsor,
    EOParametersValueAllowPhysicalCard,
};

@interface EOParametersValues : NSObject <NSCoding>

- (instancetype)initFromAPIArray:(NSArray *)array;

@end