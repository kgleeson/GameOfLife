//
//  Grid.h
//  GameOfLife
//
//  Created by Kieran Gleeson on 27/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#ifndef __GameOfLife__Grid__
#define __GameOfLife__Grid__

#include <iostream>
#include "Square.h"

#endif /* defined(__GameOfLife__Grid__) */

class Grid{
    int width, height;
public:
    Grid(int, int);
    Square** grid;
    void setupGrid();
    void printGrid();
    void testData();
};