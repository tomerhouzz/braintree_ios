@import Foundation;

extern NSString *BraintreeDemoSettingsEnvironmentDefaultsKey;
extern NSString *BraintreeDemoSettingsCustomEnvironmentURLDefaultsKey;
extern NSString *BraintreeDemoSettingsThreeDSecureEnabledDefaultsKey;
extern NSString *BraintreeDemoSettingsThreeDSecureRequiredDefaultsKey;

typedef NS_ENUM(NSInteger, BraintreeDemoTransactionServiceEnvironment) {
    BraintreeDemoTransactionServiceEnvironmentSandboxBraintreeSampleMerchant = 0,
    BraintreeDemoTransactionServiceEnvironmentProductionExecutiveSampleMerchant = 1,
    BraintreeDemoTransactionServiceEnvironmentCustomMerchant = 2,
};

typedef NS_ENUM(NSInteger, BraintreeDemoTransactionServiceThreeDSecureRequiredStatus) {
    BraintreeDemoTransactionServiceThreeDSecureRequiredStatusDefault = 0,
    BraintreeDemoTransactionServiceThreeDSecureRequiredStatusRequired = 1,
    BraintreeDemoTransactionServiceThreeDSecureRequiredStatusNotRequired = 2,
};

@interface BraintreeDemoSettings : NSObject

+ (BraintreeDemoTransactionServiceEnvironment)currentEnvironment;
+ (NSString *)currentEnvironmentName;
+ (NSString *)currentEnvironmentURLString;
+ (BOOL)threeDSecureEnabled;
+ (BraintreeDemoTransactionServiceThreeDSecureRequiredStatus)threeDSecureRequiredStatus;

@end
