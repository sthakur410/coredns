// Objective-C API for talking to github.com/coredns/coredns/coremain Go package.
//   gobind -lang=objc github.com/coredns/coredns/coremain
//
// File is generated by gobind. Do not edit.

#ifndef __Coremain_H__
#define __Coremain_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


/**
 * Various CoreDNS constants.
 */
FOUNDATION_EXPORT NSString* _Nonnull const CoremainCoreVersion;

@interface Coremain : NSObject
/**
 * Gitcommit contains the commit where we built CoreDNS from.
 */
+ (NSString* _Nonnull) gitCommit;
+ (void) setGitCommit:(NSString* _Nonnull)v;

@end

/**
 * Run is CoreDNS's main() function.
 */
FOUNDATION_EXPORT void CoremainRun(void);

#endif
