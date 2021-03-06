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
    void setupGrid();
    Square** grid;
    Square* getSquareByXY(int, int);
    int width, height;
    int findNeighbours(int);
    void getXYofSquare(int*,int*,int);
    void updateLoop();
    void actionLoop();
public:
    Grid(int, int);
    void printGrid();
    void testData();
    void runLoops();
};