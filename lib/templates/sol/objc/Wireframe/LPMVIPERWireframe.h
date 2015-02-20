//
//  LPMPlaceListWireframe.h
//  lpm-solplacesnavigation-ios
//
//  Created by Francisco Sevillano on 19/01/15.
//  Copyright (c) 2015 Francisco Sevillano. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LPMVIPERPresenter;
@class LPMVIPERViewController;

@interface LPMVIPERWireframe : NSObject

@property (nonatomic, weak) LPMVIPERPresenter *presenter;
@property (nonatomic, weak) LPMVIPERViewController *viewController;

@end
