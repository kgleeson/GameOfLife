//
//  main.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 20/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include <iostream>
#include <curses.h>
#include "Square.h"
#include "Grid.h"
#define WIDTH 80
#define HEIGHT 25


using namespace std;


void testData(Square* grid[])
{
    int testCells[3] = {13, 93, 173};
    for (int i = 0 ; i < 3; i++) {
        Square* test = grid[testCells[i]];
        test->setCurrentStateTrue();
    }
}

int main(int argc, const char * argv[])
{
    Grid grid = *new Grid(WIDTH, HEIGHT);
    Grid::setupGrid();
    testData(grid);
    Grid::printGrid(grid);
    return 0;
}

