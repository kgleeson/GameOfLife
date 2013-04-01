//
//  Grid.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 27/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include "Grid.h"


Grid::Grid(int a, int b){
    width = a;
    height = b;
    Square** grid = new Square* [width * height];
}

void Grid::setupGrid()
{
    for(int yPos = 0; yPos < height ; yPos++){
        for(int xPos = 0; xPos < width ; xPos++){
//            cout << "y: " << yPos << " x: " << xPos << " pos: " << xPos + (yPos * width) << endl;
            int iNum = xPos + (yPos * width);
            Square* obj = new Square(xPos, yPos, iNum);
            grid[xPos + (yPos * width)] = obj;
        }
    }
}

void Grid::printGrid()
{
    for(int yPos = 0; yPos < height ; yPos++){
        for(int xPos = 0; xPos < width ; xPos++){
            Square* testSquare = grid[xPos + (yPos * width)];
            if(testSquare->currentState){
            std::cout << "█" ;
            }else{
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

void Grid::testData()
{
    int testCells[3] = {13, 93, 173};
    for (int i = 0 ; i < 3; i++) {
        Square* test = grid[testCells[i]];
        test->setCurrentStateTrue();
    }
}

