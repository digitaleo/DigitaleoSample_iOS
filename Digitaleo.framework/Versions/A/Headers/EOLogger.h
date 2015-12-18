//
//  EOLog.h
//  Digitaleo
//
//  Created by Clément Roulland on 14/08/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EOLogLevel) {
    /**
     No logs
     */
    EOLogLevelNone = 0,
    /**
     Only error logs
     */
    EOLogLevelError = 1,
    /**
     Errors and warnings logs
     */
    EOLogLevelWarning = 2,
    /**
     Errors, warnings and info logs
     */
    EOLogLevelInfo = 3,
    /**
     Errors, warnings, info and debug logs
     */
    EOLogLevelDebug = 4
};

@interface EOLogger : NSObject

///--------------------------------------
#pragma mark - Properties
///--------------------------------------

/// Logs level
@property (atomic, assign) EOLogLevel logLevel;

///--------------------------------------
#pragma mark - Singleton
///--------------------------------------

/**
 A shared instance of `EOLogger` that should be used for all logging.

 @returns An shared singleton instance of `EOLogger`.
 */
+ (instancetype)sharedLogger;

///--------------------------------------
#pragma mark - Methods
///--------------------------------------

/**
 Logs a message at a specific level for a tag.
 If current logging level doesn't include this level - this method does nothing.

 @param level  Logging Level
 @param format Format to use for the log message.
 */
- (void)logMessageWithLevel:(EOLogLevel)level
                       file:(const char*)file
                       line:(int)line
                   function:(const char*)function
                     format:(NSString *)format, ... NS_FORMAT_FUNCTION(5, 6);

@end
