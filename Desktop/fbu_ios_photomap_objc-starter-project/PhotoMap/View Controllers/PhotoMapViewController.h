//
//  PhotoMapViewController.h
//  PhotoMap
//
//  Created by emersonmalca on 7/8/18.
//  Copyright © 2018 Codepath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationsViewController.h"
#import <MapKit/MapKit.h>

@class PhotoMapViewController;

@interface PhotoMapViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, LocationsViewControllerDelegate>

- (MKAnnotationView *)mapView:(MKMapView *)mapView viewForAnnotation:(id<MKAnnotation>)annotation;

@end
