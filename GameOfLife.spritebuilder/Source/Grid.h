//
//  Grid.h
//  GameOfLife
//
//  Created by Issara Paoluengtong on 2/2/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

@end
