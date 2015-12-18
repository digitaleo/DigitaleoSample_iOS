//
//  EOLog.h
//  Digitaleo
//
//  Created by Clément Roulland on 17/08/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#ifndef Digitaleo_EOLog_h
#define Digitaleo_EOLog_h

#import "EOLogger.h"

#define EOLog(level, frmt, ...) \
[[EOLogger sharedLogger] logMessageWithLevel:level file:__FILE__ line:__LINE__ function:__PRETTY_FUNCTION__ format:(frmt), ##__VA_ARGS__]

#define EOLogError(frmt, ...) \
EOLog(EOLogLevelError, (frmt), ##__VA_ARGS__)

#define EOLogWarning(frmt, ...) \
EOLog(EOLogLevelWarning, (frmt), ##__VA_ARGS__)

#define EOLogInfo(frmt, ...) \
EOLog(EOLogLevelInfo, (frmt), ##__VA_ARGS__)

#define EOLogDebug(frmt, ...) \
EOLog(EOLogLevelDebug, (frmt), ##__VA_ARGS__)

#endif
