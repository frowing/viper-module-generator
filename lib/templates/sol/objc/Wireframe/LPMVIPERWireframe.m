//
//  LPMVIPERWireframe.m
//  lpm-solplacesnavigation-ios
//
//  Created by Francisco Sevillano on 19/01/15.
//  Copyright (c) 2015 Francisco Sevillano. All rights reserved.
//

#import "LPMVIPERInteractor.h"
#import "LPMVIPERWireframe.h"
#import "LPMVIPERPresenter.h"
#import "LPMVIPERViewController.h"
#import "LPMPlaceWireframe.h"
#import "UIStoryboard+LPMAdditions.h"

@interface LPMVIPERWireframe ()

@end

@implementation LPMVIPERWireframe

- (instancetype)init
{
    self = [super init];
    
    if (self)
    {
        _viewController = [self viewControllerFromStoryboard];
        LPMVIPERPresenter *presenter = [[LPMVIPERPresenter alloc] init];
        presenter.interactor = [[LPMVIPERInteractor alloc] init];
        _viewController.eventHandler = presenter;
        presenter.userInterface = _viewController;
        presenter.wireframe = self;
        _presenter = presenter;
    }
    
    return self;
}

- (LPMVIPERViewController *)viewControllerFromStoryboard
{
    UIStoryboard *storyboard = [UIStoryboard mainStoryboard];
    LPMVIPERViewController *viewController = [storyboard instantiateViewControllerWithIdentifier:NSStringFromClass([LPMVIPERViewController class])];
    
    return viewController;
}

@end
