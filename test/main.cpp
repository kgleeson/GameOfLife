//
//  main.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 20/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include <iostream>
#include <curses.h>
#include <unistd.h>
#include "Grid.h"
#define WIDTH 80
#define HEIGHT 25


using namespace std;



int main(int argc, const char * argv[])
{
    Grid grid = *new Grid(WIDTH, HEIGHT);
    grid.testData();
    grid.printGrid();
    return 0;
}

