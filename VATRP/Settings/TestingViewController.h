//
//  TestingViewController.h
//  ACE
//
//  Created by Ruben Semerjyan on 10/8/15.
//  Copyright © 2015 VTCSecure. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SettingsWindowController.h"
@interface TestingViewController : NSViewController <NSTextFieldDelegate>

-(id) init:(SettingsWindowController*)parentController;

// note: 10.9 - viewWillAppear not being called. using explicit initialization to keep code a little cleaner (fewer if defs)
-(void) initializeData;
- (void) save;

@end
