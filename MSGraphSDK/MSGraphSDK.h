// Copyright (c) Microsoft Corporation.  All Rights Reserved.  Licensed under the MIT License.  See License in the project root for license information.

#ifndef MSSDK_h
#define MSSDK_h

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

#import "MSAuthenticationProvider.h"
#import "MSHttpProvider.h"
#import "MSURLSessionManager.h"
#import "MSLogger.h"
#import "MSGraphCoreSDK.h"

#import "NSError+MSGraphSDK.h"
#import "MSGraphClient+DefaultConfiguration.h"
#import "MSGraphClientConfiguration+DefaultConfiguration.h"

#endif
