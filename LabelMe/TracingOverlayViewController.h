//
//  TracingOverlayViewController.h
//  LabelMe
//
//  Created by David Way on 10/24/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>



@protocol TracingOverlayViewControllerDelegate;

@interface TracingOverlayViewController : UIViewController <UINavigationControllerDelegate ,UITextFieldDelegate>
{
    id <TracingOverlayViewControllerDelegate> delegate;
@private
    
    NSMutableArray *locationArray;
    
    UIBarButtonItem *doneTracingButton;
    UIBarButtonItem *cancelButton;
    
    UITextField *LabelerText;
    
    
    UIImage *tracingPicture;
    UIImage *originalTracingPicture;
    
    UIImageView *tracingPictureView;
    
    CGPoint *upperLeft;
    CGPoint *lowerRight;
    
    CGPoint locationUpperLeft;
    CGPoint locationLowerRight;
    NSString *labelString;
    
    
}

@property (nonatomic, retain) IBOutlet UIImageView *tracingPictureView;
@property (nonatomic, retain) UIImage *tracingPicture;
@property (nonatomic, retain) UIImage *originalTracingPicture;
@property (nonatomic, retain) IBOutlet UIBarButtonItem *doneTracingButton;

@property (nonatomic, retain) IBOutlet UIBarButtonItem *cancelButton;



@property (nonatomic, retain) IBOutlet UITextField *LabelerText;
@property (nonatomic, retain) NSString *labelString;

@property (nonatomic, retain) id<TracingOverlayViewControllerDelegate> delegate;

@property (nonatomic, retain) NSMutableArray *locationArray;



-(IBAction)doneTracingAction:(id)sender;
-(IBAction)cancelAction:(id)sender;
-(IBAction)touchPicture:(id)sender;

-(void)setPicture:(UIImage*)picture;
-(void)setOriginalPicture:(UIImage *)picture1;
-(void)drawRect;
-(void)clearBox;


@end

@protocol TracingOverlayViewControllerDelegate
-(void)finishedTracing:(UIImage*)pictureToSend:(NSString*)label;
-(void)didHitCancel;
@end
