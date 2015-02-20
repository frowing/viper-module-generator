//
//  LPMVIPERWireframe.h
//  lpm-solplacesnavigation-ios
//
//  Created by Lonely Planet Inc. on 19/01/15.
//  Copyright (c) 2015 Lonely Planet Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LPMVIPERPresenter;
@class LPMVIPERViewController;

@interface LPMVIPERWireframe : NSObject

@property (nonatomic, weak) LPMVIPERPresenter *presenter;
@property (nonatomic, weak) LPMVIPERViewController *viewController;

@end
