//
//  SMLViewController.h
//  YATC-challenge
//
//  Created by Michael Ball on 6/16/14.
//  Copyright (c) 2014 Source Main LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>
#import <Social/Social.h>

@interface SMLViewController : UITableViewController

@property (nonatomic) ACAccountStore *accountStore;

@end
