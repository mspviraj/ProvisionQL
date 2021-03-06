#include <CoreFoundation/CoreFoundation.h>
#include <CoreServices/CoreServices.h>
#include <QuickLook/QuickLook.h>

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import <Security/Security.h>

#import <NSBezierPath+IOS7RoundedRect.h>

static NSString * const kPluginBundleId = @"com.FerretSyndicate.ProvisionQL";
static NSString * const kDataType_ipa               = @"com.apple.itunes.ipa";
static NSString * const kDataType_app               = @"com.apple.application-bundle";
static NSString * const kDataType_ios_provision     = @"com.apple.mobileprovision";
static NSString * const kDataType_ios_provision_old = @"com.apple.iphone.mobileprovision";
static NSString * const kDataType_osx_provision     = @"com.apple.provisionprofile";

#define SIGNED_CODE 0

NSImage *roundCorners(NSImage *image);
NSImage *imageFromApp(NSURL *URL, NSString *dataType, NSString *fileName);
NSString *mainIconNameForApp(NSDictionary *appPropertyList);
int expirationStatus(NSDate *date, NSCalendar *calendar);
