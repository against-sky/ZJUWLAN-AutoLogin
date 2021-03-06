//
//  MenubarAppDelegate.h
//  Menubar
//
//  Created by Orpine on 3/21/14.
//  Copyright (c) 2014 Orpine. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>
#import <SystemConfiguration/CaptiveNetwork.h>  
#import "Sparkle/Sparkle.h"
#import "Reachability.h"
#import "PreferenceController.h"
@interface MenubarAppDelegate : NSObject <NSApplicationDelegate>
{
    Reachability  *hostReach;
}

@property (assign) IBOutlet NSWindow *window;
@property (weak) IBOutlet NSMenu *statusMenu;
@property (strong, nonatomic) NSStatusItem *statusBar;
@property (weak) IBOutlet NSView *preferencePane;
@property (nonatomic, retain) NSDictionary *userDefaults;
- (IBAction)ConnectZJUWLAN:(id)sender;
- (NSString *)setupConnection;
- (void)connecting:(BOOL)isClick;
- (void)autoLoginOptionChanged:(NSNotification *)note;
@end
