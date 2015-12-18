//
//  EOContact.h
//  Digitaleo
//
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EOContact : NSObject

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// The id of EOContact.
@property (nonatomic) NSString *id;

/// Dictionary wich contains all contact's data.
@property (readonly) NSMutableDictionary *data;

///--------------------------------------
#pragma mark - Singleton
///--------------------------------------

/**
 Gets the currently-running contact from disk and returns an instance of
 it. If this contact is not stored on disk, returns an EOContact.
 @result Returns an EOContact that represents the currently-running
 contact.
 */
+ (EOContact *)currentContact;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Save contact in file
 */
- (void)save;

///--------------------------------------
#pragma mark - Subscript
///--------------------------------------

/**
 Getter for subscripting
 */
- (id)objectForKeyedSubscript:(id <NSCopying>)key;

/**
 Setter for subscripting
 Key "_id" not allowed
 */
- (void)setObject:(id)obj forKeyedSubscript:(id <NSCopying>)key;

@end
