//
//  MainViewController.h
//  L1-TestProject
//
//  Created by rushan adelshin on 07.02.2018.
//  Copyright © 2018 Eldar Adelshin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController


typedef struct SearchRequest {
    __unsafe_unretained NSString *origin;
    __unsafe_unretained NSString *destination;
    __unsafe_unretained NSDate *departDate;
    __unsafe_unretained NSDate *returnDate;
} SearchRequest;


@end
