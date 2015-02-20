//
//  LPMPlaceListViewController.h
//  lpm-solplacesnavigation-ios
//
//  Created by Francisco Sevillano on 20/01/15.
//  Copyright (c) 2015 Francisco Sevillano. All rights reserved.
//

#import "LPMPlaceListView.h"
#import <UIKit/UIKit.h>

@class LPMVIPERPresenter;

@interface LPMVIPERViewController : UIViewController<LPMVIPERView>

@property (nonatomic, strong) LPMVIPERPresenter *eventHandler;

@end
