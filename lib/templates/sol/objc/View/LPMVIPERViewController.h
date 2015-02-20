//
//  LPMVIPERViewController.h
//  lpm-solplacesnavigation-ios
//
//  Created by Lonely Planet Inc. on 20/01/15.
//  Copyright (c) 2015 Lonely Planet Inc. All rights reserved.
//

#import "LPMVIPERView.h"
#import <UIKit/UIKit.h>

@class LPMVIPERPresenter;

@interface LPMVIPERViewController : UIViewController<LPMVIPERView>

@property (nonatomic, strong) LPMVIPERPresenter *eventHandler;

@end
