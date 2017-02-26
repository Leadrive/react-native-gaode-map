//
//  GDMapViewManager.h
//  mobike
//
//  Created by Uncle Charlie on 25/2/2017.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTViewManager.h>


@class GDMapView;

@interface GDMapViewManager : RCTViewManager

- (void)setUp;
- (void)sendEvent:(GDMapView *)mapView params:(NSDictionary *)params;

@end
