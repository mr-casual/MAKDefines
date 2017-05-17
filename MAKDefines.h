//
//  MAKDefines.h
//  MAKDefines
//
//  Created by Martin Kloepfel on 28.06.15.
//  Copyright (c) 2014 Martin Kloepfel. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef MAKDefines_h
#define MAKDefines_h

// short version of NSLocalizedString with parameters
#define L(key, ...) [NSString stringWithFormat:NSLocalizedString((key), nil), ## __VA_ARGS__]

// short version of stringWithFormat
#define F(format, ...) [NSString stringWithFormat:format, ## __VA_ARGS__]

// get the current class name via file name, works only if the file name is the same then the class name ;)
#define __PRETTY_CLASS__ [[[[NSURL alloc] initFileURLWithPath:F(@"%s", __FILE__)].lastPathComponent stringByReplacingOccurrencesOfString:@".h" withString:@""] stringByReplacingOccurrencesOfString:@".m" withString:@""]

#endif /* MAKDefines_h */

