//
//  BNBLicenseManager+SafeInstantiation.h
//  BanubaLicenseServicingSDK
//
//  Created by Rostyslav Dovhaliuk on 16.12.2022.
//

#import <Foundation/Foundation.h>
#import <BNBSdkCore/BNBLicenseManager.h>

@interface BNBLicenseManager (SafeInstantiation)

/// BNBLicenseManager throws NSException, if malformed token is passed. This initializer wrapper helps to mitigate this side effect.
+ (nullable BNBLicenseManager *)createSafely:(nonnull NSString *)clientToken;

@end
