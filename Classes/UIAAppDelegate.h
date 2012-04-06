//
//  UIAAppDelegate.h
//  UIA
//
//  Created by sk on 11-7-28.
//  Copyright 2011 sk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIAViewController;

@interface UIAAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    UIAViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIAViewController *viewController;

@end

