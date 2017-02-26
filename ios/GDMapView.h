//
//  GDMapView.h
//  mobike
//
//  Created by Uncle Charlie on 25/2/2017.
//  Copyright © 2017 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MAMapKit/MAMapKit.h>
#import <AMapFoundationKit/AMapFoundationKit.h>

@interface GDMapView : MAMapView

- (void)setZoom:(float)zoom;
- (void)setCenter:(NSDictionary *)coordinateObj;
- (void)setMarker:(NSDictionary *)Options;

@end
