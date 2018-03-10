//
//  TicketsViewController.h
//  L1-TestProject
//
//  Created by rushan adelshin on 25.02.2018.
//  Copyright © 2018 Eldar Adelshin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TicketsViewController : UITableViewController

- (instancetype)initFavoriteTicketsController;
- (instancetype)initWithTickets:(NSArray *)tickets;

@end
