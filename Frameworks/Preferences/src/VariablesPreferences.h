#import <MASPreferences/MASPreferencesViewController.h>

@interface VariablesPreferences : NSViewController <MASPreferencesViewController>
@property (nonatomic, readonly) NSString* viewIdentifier;
@property (nonatomic, readonly) NSImage*  toolbarItemImage;
@property (nonatomic, readonly) NSString* toolbarItemLabel;
@end
