//
//  SRSimulatorWindowController.h
//  PebbleSimulator
//
//  Created by Steven van Rossum on 03-09-13.
//  Copyright (c) 2013 Steven van Rossum. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SRPebbleApplication.h"
#import "SRPebbleSimView.h"
#import "SRPebbleButton.h"

@interface SRSimulatorWindowController : NSWindowController
{
    // Variables
    @private SRPebbleApplication * application;
}

// Properties
@property (assign) IBOutlet SRPebbleButton * upButton;
@property (assign) IBOutlet SRPebbleButton * downButton;
@property (assign) IBOutlet SRPebbleButton * selectButton;
@property (assign) IBOutlet SRPebbleButton * backButton;
@property (assign) IBOutlet SRPebbleSimView * displayView;

// Class methods
+ (SRSimulatorWindowController *)sharedController;

// Instance methods
- (BOOL)runPebbleApplicationAtURL:(NSURL *)url;

@end
