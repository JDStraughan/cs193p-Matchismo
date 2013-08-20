//
//  Card.m
//  Matchismo
//
//  Created by Jason Straughan on 8/19/13.
//  Copyright (c) 2013 JDStraughan. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
