//
//  AppDelegate.h
//  testlocalized
//
//  Created by  on 11-10-8.
//  Copyright CZ Cloud Soft  2011年. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
