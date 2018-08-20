//
//  TicketTableViewCell.h
//  L1-TestProject
//
//  Created by rushan adelshin on 17.02.2018.
//  Copyright © 2018 Eldar Adelshin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DataManager.h"
#import "APIManager.h"
#import "Ticket.h"
#import "FavoriteTicket+CoreDataProperties.h"

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) Ticket *ticket;
@property (nonatomic, strong) FavoriteTicket *favoriteTicket;
@end
