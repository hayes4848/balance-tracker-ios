//
//  ViewController.h
//  Balance Tracker
//
//  Created by Andy Hayes on 4/25/16.
//  Copyright © 2016 Andy Hayes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *moneyInput;
@property (weak, nonatomic) IBOutlet UITableView *balanceTable;
@property (weak, nonatomic) IBOutlet UILabel *currentAmount;

@end

