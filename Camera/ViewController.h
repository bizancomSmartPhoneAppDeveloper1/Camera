//
//  ViewController.h
//  Camera
//
//  Created by bizan.com.mac09 on 2014/02/23.
//  Copyright (c) 2014年 bizan.com.mac09. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate,UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

- (IBAction)showimagePicker:(id)sender;

// he1


@end
