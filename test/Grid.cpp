//
//  Grid.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 27/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include "Grid.h"

Grid::Grid(int a, int b)
{
    width = a;
    height = b;
    grid = new Square* [width * height];
    setupGrid();
}

void Grid::setupGrid()
{
    for(int yPos = 0; yPos < height ; yPos++)
    {
        for(int xPos = 0; xPos < width ; xPos++)
        {
//            cout << "y: " << yPos << " x: " << xPos << " pos: " << xPos + (yPos * width) << endl;
            int iNum = xPos + (yPos * width);
            Square* obj = new Square(xPos, yPos, iNum);
            grid[xPos + (yPos * width)] = obj;
        }
    }
}


void Grid::printGrid()
{
    for(int yPos = 0; yPos < height ; yPos++)
    {
        for(int xPos = 0; xPos < width ; xPos++)
        {
            Square* testSquare = grid[xPos + (yPos * width)];
            if(testSquare->getCurrentState())
            {
                std::cout << "█" ;
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << findNeighbours(81) << std::endl;
}

void Grid::testData()
{
    for (int i = 0 ; i < 3; i++)
    {
        Square* test = Grid::getSquareByXY(i,i);
        test->setCurrentStateTrue();
    }
}

Square* Grid::getSquareByXY(int x, int y)
{
    return grid[x + (y * width)];
}

void Grid::getXYofSquare(int *X, int *Y, int index)
{
    *X = index % width;
    *Y = index / width;
}

int Grid::findNeighbours(int indexNum)
{
    int x,y;
    getXYofSquare(&x, &y, indexNum);
    std::cout << "X: " << x << " Y: " << y << std::endl;
    int totalNeighbours = 0;
    Square* neighbour;
    for(int yPos=std::max(0, y - 1); yPos <= y + 1 && yPos <= height; yPos++)
    {
        for(int xPos=std::max(0, x - 1); xPos <= x + 1 && xPos < width; xPos++)
        {
            if (xPos == x && yPos == y)
            {
                continue;
            }
            int iNum = xPos+(yPos * width);
            neighbour = grid[iNum];
            std::cout << "iNum: " << iNum << std::endl;
            std::cout << "N: " << neighbour->getCurrentState() << std::endl;
            if (neighbour->getCurrentState())
            {
                totalNeighbours++;
            }
        }
    }
    return totalNeighbours;
}
