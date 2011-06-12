//
//  AppDelegate.h
//  viral
//
//  Created by Manan Patel on 6/12/11.
//  Copyright ngmoco:) 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
