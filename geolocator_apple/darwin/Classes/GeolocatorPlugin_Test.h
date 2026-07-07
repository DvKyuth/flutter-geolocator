#import "GeolocationHandler.h"
#import "LocationAccuracyHandler.h"
#import "PermissionHandler.h"

/// Methods exposed for unit testing.
@interface GeolocatorPlugin(Test)

/// Overrides the GeolocationHandler instance used by the GeolocatorPlugin.
/// This should only be used for testing purposes.
- (void)setGeolocationHandlerOverride:(GeolocationHandler *)geolocationHandler;

/// Overrides the LocationAccuracyHandler instance used by the GeolocatorPlugin.
/// This should only be used for testing purposes.
- (void)setLocationAccuracyHandlerOverride:(LocationAccuracyHandler *)locationAccuracyHandler;

/// Overrides the PermissionHandler instance used by the GeolocatorPlugin.
/// This should only be used for testing purposes.
- (void)setPermissionHandlerOverride:(PermissionHandler *)permissionHandler;

@end
