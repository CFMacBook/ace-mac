//
//  VideoMailWindowController.h
//  MacApp
//
//  Created by Norayr Harutyunyan on 8/27/15.
//  Copyright (c) 2015 VTCSecure. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface VideoMailWindowController : NSWindowController

@property (nonatomic, assign) BOOL isShow;

- (void) enableSelfVideo;

@end
