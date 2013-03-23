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
    for(int i = 0; i < HEIGHT ; i++){
        for(int j = 0; j < WIDTH ; j++){
            Square * obj = new Square();
            obj->setPos(i, j);
            grid[j + (i * WIDTH)] = obj;
        }
    }
}

void printGrid(Square * grid[])
{
    for(int i = 0; i < HEIGHT ; i++){
        for(int j = 0; j < WIDTH ; j++){
            cout << grid[i + (j * WIDTH)];
        }
        cout << '\n';
    }
}

int main(int argc, const char * argv[])
{
    Square * grid = new Square[WIDTH*HEIGHT];
    setupGrid(&grid);
//    grid[5][5] = 'X';
    printGrid(&grid);
    return 0;
}

