//
//  XHLocationHelper.h
//  MessageDisplayExample
//
//  Created by qtone-1 on 14-5-8.
//  Copyright (c) 2014年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507 本人QQ群（142557668）. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

typedef void(^DidGetGeolocationsCompledBlock)(NSArray *placemarks,CLLocation *location);

@interface XHLocationHelper : NSObject{
    BOOL isWithPlaceMark;
}

- (void)getCurrentGeolocationsCompled:(DidGetGeolocationsCompledBlock)compled;
- (void)getCurrentGeolocationsWithPlaceMarkCompled:(DidGetGeolocationsCompledBlock)compled;

@end
