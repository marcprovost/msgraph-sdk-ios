#import <TargetConditionals.h>
#import <Foundation/Foundation.h>

#if TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR || TARGET_OS_TV
#import <UIKit/UIKit.h>
#else
#import <AppKit/AppKit.h>
#endif

//! Project version number for GLCore.
FOUNDATION_EXPORT double MSGraphSDKVersionNumber;

//! Project version string for GLCore.
FOUNDATION_EXPORT const unsigned char MSGraphSDKVersionString[];

#import <MSGraphSDK/MSAuthenticationProvider.h>
#import <MSGraphSDK/MSHttpProvider.h>
#import <MSGraphSDK/MSURLSessionManager.h>
#import <MSGraphSDK/MSLogger.h>
#import <MSGraphSDK/MSGraphCoreSDK.h>

#import <MSGraphSDK/NSError+MSGraphSDK.h>
#import <MSGraphSDK/MSGraphClient+DefaultConfiguration.h>
#import <MSGraphSDK/MSGraphClientConfiguration+DefaultConfiguration.h>


