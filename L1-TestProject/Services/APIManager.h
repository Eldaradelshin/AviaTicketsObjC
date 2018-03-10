//
//  APIManager.h
//  L1-TestProject
//
//  Created by rushan adelshin on 08.02.2018.
//  Copyright © 2018 Eldar Adelshin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataManager.h"
#import "MainViewController.h"

@interface APIManager : NSObject

#define AirlineLogo(iata) [NSURL URLWithString:[NSString stringWithFormat:@"https://pics.avs.io/200/200/%@.png", iata]];

+ (instancetype)sharedInstance;
- (void)cityForCurrentIP:(void (^)(City *city))completion;
- (void)ticketsWithRequest:(SearchRequest)request withCompletion: (void (^) (NSArray *tickets))completion;
- (void)mapPricesFor:(City *)origin withCompletion:(void (^)(NSArray *prices))completion;

@end
