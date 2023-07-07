//
//  WRSAppDelegate.h
//  WRSHttpServer
//
//  Created by jack on 07/07/2023.
//  Copyright (c) 2023 jack. All rights reserved.
//

@import UIKit;
#import "GCDWebServer.h"

@interface WRSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) GCDWebServer *webServer;

@end
