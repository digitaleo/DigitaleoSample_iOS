//
//  EOContact.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOContact : NSObject

/*!
 Gets the currently-running contact from disk and returns an instance of
 it. If this contact is not stored on disk, returns an EOContact.
 @result Returns an EOContact that represents the currently-running
 contact.
 */
+ (EOContact *)currentContact;

/*!
 Save asynchronously the instance of contact on Digitaleo's server
 */
- (void)saveInBackground;

/*!
 Save asynchronously the instance of contact on Digitaleo's server
 @param block The block to execute
 */
- (void)saveInBackgroundWithBlock:(void (^)(BOOL succeed, NSError *error))block;

/*!
 Load contact's data from Digitaleo's server
 */
- (void)loadInBackground;

/*!
 Load contact's data from Digitaleo's server
 @param block The block to execute
 */
- (void)loadInBackgroundWithBlock:(void (^)(BOOL succeed, NSError *error))block;

/*!
 Getter for subscripting
 */
- (id)objectForKeyedSubscript:(id <NSCopying>)key;

/*!
 Setter for subscripting
 Key "_id" not allowed
 */
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;

/// The id of EOContact.
@property (nonatomic) NSString *id;

@end
