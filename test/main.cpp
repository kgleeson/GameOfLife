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
#define WIDTH 80
#define HEIGHT 25


using namespace std;

void setupGrid(Square * grid[])
{
    for(int xPos = 0; xPos < HEIGHT ; xPos++){
        for(int yPos = 0; yPos < WIDTH ; yPos++){
            cout << "x: " << xPos << " y: " << yPos << " pos: " << yPos + (xPos * WIDTH) << endl;
            Square * obj = new Square();
            obj->setPos(xPos, yPos);
            grid[yPos + (xPos * WIDTH)] = obj;
        }
    }
}

int main(int argc, const char * argv[])
{
    Square * grid = new Square[WIDTH * HEIGHT];
    setupGrid(&grid);
    return 0;
}

