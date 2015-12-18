//
//  EOCMOptout.h
//  Digitaleo
//
//  Created by Clément Roulland on 11/08/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOCMOptoutMedia) {
    EOCMOptoutMediaSms,
    EOCMOptoutMediaEmail,
    EOCMOptoutMediaVoice,
    EOCMOptoutMediaVoicemail
};

@interface EOCMOptout : NSObject <NSCoding>

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/**
 Mean of contact.
 _ Mobile number if media is SMS ;
 _ Phone number if media is Voice or Voicemail ;
 _ Mail address if media is Email.
 */
@property NSString        *meanOfContact;
/// Reason of optout
@property NSString        *reason;
/// Media of optout
@property EOCMOptoutMedia  media;

///--------------------------------------
#pragma mark - Init
///--------------------------------------

/**
 Init Optout from Digitaleo's API result
 @param dictionary Dictionary return by Digitaleo's API
 */
- (instancetype)initFromAPIDictionary:(NSDictionary *)dictionary;

///--------------------------------------
#pragma mark - EOCMOptoutMedia
///--------------------------------------

/**
 Get media of optout in string
 */
- (NSString*)mediaString;

/**
 Cast media in his string value
 @param media EOCMOptoutMedia
 */
+ (NSString*)stringForMedia:(EOCMOptoutMedia)media;

@end
