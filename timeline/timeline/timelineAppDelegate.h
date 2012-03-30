//
//  timelineAppDelegate.h
//  timeline
//
//  Created by Philipp Schubert on 30.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class timelineViewController;

@interface timelineAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) timelineViewController *viewController;

@end
