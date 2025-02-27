//
//  DMTabBarItem.h
//  DMTabBar - XCode like Segmented Control
//
//  Created by Daniele Margutti on 6/18/12.
//  Copyright (c) 2012 Daniele Margutti (http://www.danielemargutti.com - daniele.margutti@gmail.com). All rights reserved.
//  Licensed under MIT License
//

#import <Foundation/Foundation.h>

@interface DMTabBarItem : NSButtonCell { }

@property (getter=isEnabled) BOOL enabled;                      // YES or NO to enable or disable the item
@property (nonatomic,strong)    NSImage*    icon;                           // That's the image of the item
@property (nonatomic,strong)    NSString*   toolTip;                        // Tool tip message
@property (copy) NSString *keyEquivalent;                // Shortcut key equivalent
@property NSEventModifierFlags keyEquivalentModifierMask;    // Shortcut modifier key (keyEquivalentModifierMask+keyEquivalent = event)
@property NSInteger tag;                         // Tag of the item
@property NSControlStateValue state;                        // Current state (NSOnState = selected)

// Internal use
// We'll use a customized NSButton (+NSButtonCell) and apply it inside the bar for each item.
// You should never access to this element, but only with the DMTabBarItem istance itself.
@property (nonatomic,readonly)  NSButton*   tabBarItemButton;

// Init methods
+ (DMTabBarItem *) tabBarItemWithIcon:(NSImage *) iconImage tag:(NSUInteger) itemTag;
- (id)initWithIcon:(NSImage *) iconImage tag:(NSUInteger) itemTag;

@end
