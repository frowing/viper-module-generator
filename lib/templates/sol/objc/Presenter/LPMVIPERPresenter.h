//
//  LPMVIPERPresenter.h
//  lpm-solplacesnavigation-ios
//
//  Created by Lonely Planet Inc. on 20/01/15.
//  Copyright (c) 2015 Lonely Planet Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "LPMVIPEREventHandling.h"
#import "LPMVIPERInteracting.h"
#import "LPMVIPERView.h"
#import "LPMVIPERWireframe.h"

@interface LPMVIPERPresenter : NSObject<LPMVIPEREventHandling>

@property (nonatomic, strong) id<LPMVIPERInteracting> interactor;
@property (nonatomic, weak) id<LPMVIPERView> userInterface;
@property (nonatomic, strong) LPMVIPERWireframe *wireframe;

@end
