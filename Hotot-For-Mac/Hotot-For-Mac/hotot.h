//
//  debug.h
//  Hotot-For-Mac
//
//  Created by @Kee_Kun on 11/09/24.
//  Hotot For Mac is licensed under LGPL version 3.
//

enum {
    HototStatusInit         = 0,
    HototStatusLoadFinished = 1,
    HototStatusSignin       = 2
};
typedef NSUInteger HototStatus;

#ifndef LOG_TO_FILE
    #define LOG_TO_FILE YES
#endif

#ifndef Hotot_For_Mac_debug_h
#define Hotot_For_Mac_debug_h

#ifdef DEBUG
#   define DLog(fmt, ...) NSLog((@"%s %s [Line %d] " fmt), __FILE__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define DLog(...) ;
#endif

// ALog always displays output regardless of the DEBUG setting
#define ALog(fmt, ...) NSLog((@"%s %s [Line %d] " fmt), __FILE__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

#endif
