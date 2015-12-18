//
//  NotificationsViewController.m
//  DigitaleoSample
//
//  Created by Clément Roulland on 29/01/2015.
//  Copyright (c) 2015 Digitaleo. All rights reserved.
//

#import "NotificationsViewController.h"
#import "AppDelegate.h"
#import <Digitaleo/Digitaleo.h>

@interface NotificationsViewController ()
@property (nonatomic, strong)NSArray *notifications;
@property EOMobileService *mobileService;
@end

@implementation NotificationsViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    AppDelegate *appDelegate = [UIApplication sharedApplication].delegate;
    self.mobileService = appDelegate.mobileService;
    
    self.refreshControl = [[UIRefreshControl alloc] init];
    [self.refreshControl addTarget:self action:@selector(handleRefresh:) forControlEvents:UIControlEventValueChanged];
    
    [self loadNotifications];
}

- (void)handleRefresh:(id)paramSender {
    [self loadNotifications];
}

- (void)loadNotifications {
    [self.mobileService getMessages:@[] completion:^(NSArray *messages, NSError *error) {
        if(!error){
            self.notifications = messages;
            [self.tableView reloadData];
        }else{
            NSLog(@"%s %i | Error on [EOMessage findInBackgroundWithBlock:]: %@", __FUNCTION__, __LINE__, error);
        }
        [self.refreshControl endRefreshing];
    }];
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [self.notifications count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"notificationCell" forIndexPath:indexPath];
    UILabel *label = (UILabel *)[cell viewWithTag:0];
    
    EOMessage *message = [self.notifications objectAtIndex:indexPath.row];
    if (message.status < EOMessageStatusDelivered) {
        [message setStatus:EOMessageStatusDelivered];
        [self.mobileService saveMessage:message];
    }
    label.text = [message valueForKey:@"text"];

    if(message.status < EOMessageStatusRead){
        [cell setBackgroundColor:[UIColor colorWithRed:0.839 green:0.903 blue:0.992 alpha:1.000]];
    }else{
        [cell setBackgroundColor:[UIColor whiteColor]];
    }
    
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    EOMessage *message = [self.notifications objectAtIndex:indexPath.row];
    [message setStatus:EOMessageStatusRead];
    [self.mobileService saveMessage:message];
}

@end
