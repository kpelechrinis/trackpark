//
//  TrackParkViewController.h
//  TrackPark
//
//  Created by Konstantinos Pelechrinis on 10/7/14.
//  Copyright (c) 2014 edu.pitt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import <CoreLocation/CoreLocation.h>

@interface TrackParkViewController : UIViewController <MFMailComposeViewControllerDelegate,CLLocationManagerDelegate> // Add the delegate
- (IBAction)showEmail:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *latLabel;
@property (weak, nonatomic) IBOutlet UILabel *lonLabel;
- (IBAction)getCurrentLocation:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *timeLabel;
@property (weak, nonatomic) IBOutlet UILabel *parkTime;
- (IBAction)park:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *parkLat;
@property (weak, nonatomic) IBOutlet UILabel *parkLon;
- (IBAction)stopTrack:(id)sender;
- (IBAction)resetExit:(id)sender;
- (IBAction)aboutUS:(id)sender;
@end

