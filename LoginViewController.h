//
//  LoginViewController.h
//  gpsTracker
//
//  Created by dsierra on 7/17/13.
//  Copyright (c) 2013 devFreaks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginViewController : UITableViewController<UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *userTxt;
@property (strong, nonatomic) IBOutlet UITextField *passTxt;
- (IBAction)login:(id)sender;

@end
