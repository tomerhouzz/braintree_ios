#import "BraintreeCore.h"

@class BTApplePayTokenizationClient;

BT_ASSUME_NONNULL_BEGIN

@interface Braintree (ApplePay)

/// Create a new Apple Pay tokenization client with a client key.
///
/// @note Malformed or invalid client keys may not cause this method to return `nil`.
/// Client keys are designed for Braintree to initialize itself without requiring an initial
/// network call, so the only validation that occurs is a basic syntax check.
///
/// @param clientKey The client key. Passing an invalid key will return `nil`.
/// @return An Apple Pay tokenization client, or `nil` if the client key is invalid.
+ (BT_NULLABLE BTApplePayTokenizationClient *)applePayClientWithClientKey:(NSString *)clientKey;


/// Create a new Apple Pay tokenization client with a client token from your server.
///
/// @param clientToken The client token retrieved from your server. Passing an invalid client
/// token will return `nil`.
/// @return An Apple Pay tokenization client, or `nil` if the client token is invalid.
+ (BT_NULLABLE BTApplePayTokenizationClient *)applePayClientWithClientToken:(NSString *)clientToken;

@end

BT_ASSUME_NONNULL_END