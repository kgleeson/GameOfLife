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

void setupGrid(Square* grid[])
{
    for(int yPos = 0; yPos < HEIGHT ; yPos++){
        for(int xPos = 0; xPos < WIDTH ; xPos++){
//            cout << "y: " << yPos << " x: " << xPos << " pos: " << xPos + (yPos * WIDTH) << endl;
            Square* obj = new Square(xPos, yPos);
            grid[xPos + (yPos * WIDTH)] = obj;
        }
    }
}

void printGrid(Square* grid[])
{
    for(int yPos = 0; yPos < HEIGHT ; yPos++){
        for(int xPos = 0; xPos < WIDTH ; xPos++){
            Square* testSquare = grid[xPos + (yPos * WIDTH)];
            bool state = testSquare->currentState;
            if(state == 1){
            cout << 'X' ;
            }else{
                cout << ' ';
            }
        }
        cout << endl;
    }
}

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
    Square** grid = new Square* [WIDTH * HEIGHT];
    setupGrid(grid);
    testData(grid);
    printGrid(grid);
    return 0;
}

