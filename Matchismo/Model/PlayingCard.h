//
//  PlayingCard.h
//  Matchismo
//
//  Created by Jason Straughan on 8/19/13.
//  Copyright (c) 2013 JDStraughan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
