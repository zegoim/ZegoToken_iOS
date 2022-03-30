#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "allocators.h"
#import "document.h"
#import "encodedstream.h"
#import "encodings.h"
#import "en.h"
#import "error.h"
#import "filereadstream.h"
#import "filewritestream.h"
#import "fwd.h"
#import "biginteger.h"
#import "diyfp.h"
#import "dtoa.h"
#import "ieee754.h"
#import "itoa.h"
#import "meta.h"
#import "pow10.h"
#import "regex.h"
#import "stack.h"
#import "strfunc.h"
#import "strtod.h"
#import "swap.h"
#import "istreamwrapper.h"
#import "memorybuffer.h"
#import "memorystream.h"
#import "ostreamwrapper.h"
#import "pointer.h"
#import "prettywriter.h"
#import "rapidjson.h"
#import "reader.h"
#import "schema.h"
#import "stream.h"
#import "stringbuffer.h"
#import "writer.h"
#import "aes.h"
#import "Base64.h"
#import "json_tools.hpp"
#import "ZegoCrypto.hpp"
#import "ZegoServerAssistant.h"
#import "ZegoServerAssistantDefines.h"
#import "ZegoServerAssistantImpl.h"
#import "ZegoToken.h"

FOUNDATION_EXPORT double ZegoTokenVersionNumber;
FOUNDATION_EXPORT const unsigned char ZegoTokenVersionString[];

