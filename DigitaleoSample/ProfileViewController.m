//
//  ProfileViewController.m
//  DigitaleoSample
//
//  Created by Clément Roulland on 29/01/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "ProfileViewController.h"
#import "AppDelegate.h"
#import <Digitaleo/Digitaleo.h>

@interface ProfileViewController ()

- (IBAction)saveTapped:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *firstnameInput;
@property (weak, nonatomic) IBOutlet UITextField *nameInput;
@property (weak, nonatomic) IBOutlet UITextField *ageInput;
@property (weak, nonatomic) IBOutlet UITextField *cityInput;
@property (weak, nonatomic) IBOutlet UITextField *zipcodeInput;

@property EOMobileService *mobileService;

@end

@implementation ProfileViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    AppDelegate *appDelegate = [UIApplication sharedApplication].delegate;
    self.mobileService = appDelegate.mobileService;
    
    [self.firstnameInput setText:[EOContact currentContact][@"firstname"]];
    [self.nameInput setText:[EOContact currentContact][@"name"]];
    [self.ageInput setText:[EOContact currentContact][@"age"]];
    [self.cityInput setText:[EOContact currentContact][@"city"]];
    [self.zipcodeInput setText:[EOContact currentContact][@"zipcode"]];
}

- (IBAction)saveTapped:(id)sender {
    [EOContact currentContact][@"firstname"] = self.firstnameInput.text;
    [EOContact currentContact][@"name"] = self.nameInput.text;
    [EOContact currentContact][@"age"] = self.ageInput.text;
    [EOContact currentContact][@"city"] = self.cityInput.text;
    [EOContact currentContact][@"zipcode"] = self.zipcodeInput.text;

    [self.mobileService saveContact:[EOContact currentContact] completion:^(BOOL succeed, NSError *error) {
        if(succeed){
            NSLog(@"%s %i | Profile saved.", __FUNCTION__, __LINE__);
        }else{
            NSLog(@"%s %i | Error on save.", __FUNCTION__, __LINE__);
        }
    }];
}
@end
