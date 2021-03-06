#import "ArtsyAuthentication.h"
#import "ArtsyNetworkOperator.h"
#import <Accounts/Accounts.h>

extern NSString* const ArtsyOAuthTokenKey;
extern NSString* const ArtsyOAuthExpiryKey;
extern NSString* const ArtsyXAppTokenKey;

@class ArtsyNetworkOperator;

@interface ArtsyAuthentication (Private)

- (void)callback:(ArtsyToken *)token error:(NSError *)error completion:(ArtsyAuthenticationCallback)callback;
- (ArtsyNetworkSuccessCallback)successfulLoginBlock:(ArtsyAuthenticationCallback)callback;
- (ArtsyNetworkFailureCallback)failedLoginBlock:(ArtsyAuthenticationCallback)callback;

@property (nonatomic, readonly) ArtsyNetworkOperator *networkOperator;

@property (nonatomic, readonly) ACAccountStore *accountStore;

@end
