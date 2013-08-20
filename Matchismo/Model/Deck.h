//
//  Deck.h
//  Matchismo
//
//  Created by Jason Straughan on 8/19/13.
//  Copyright (c) 2013 JDStraughan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
