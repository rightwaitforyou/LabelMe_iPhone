//
//  TracingOverlayViewController.h
//  LabelMe
//
//  Created by David Way on 10/24/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>



@protocol TracingOverlayViewControllerDelegate;

@interface TracingOverlayViewController : UIViewController <UINavigationControllerDelegate>
{
    id <TracingOverlayViewControllerDelegate> delegate;
@private
    
    NSMutableArray *locationArray;
    
    UIBarButtonItem *doneTracingButton;
    UIBarButtonItem *cancelButton;
    
    UIImage *tracingPicture;
    
    UIImageView *tracingPictureView;
    
}

@property (nonatomic, retain) IBOutlet UIImageView *tracingPictureView;

@property (nonatomic, retain) IBOutlet UIBarButtonItem *doneTracingButton;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *cancelButton;
@property (nonatomic, retain) id<TracingOverlayViewControllerDelegate> delegate;

@property (nonatomic, retain) NSMutableArray *locationArray;



-(IBAction)doneTracingAction:(id)sender;
-(IBAction)cancelAction:(id)sender;
-(IBAction)touchPicture:(id)sender;

-(void)setPicture:(UIImage*)picture;


@end

@protocol TracingOverlayViewControllerDelegate
-(void)finishedTracing;
-(void)didHitCancel;
@end