//
//  main.cpp
//  test
//
//  Created by Kieran Gleeson on 20/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include <iostream>
#include <curses.h>
#define WIDTH 80
#define HEIGHT 25

using namespace std;

void setupGrid(char grid[HEIGHT][WIDTH])
{
    for(int i=0; i < HEIGHT ; i++){
        for(int j=0; j< WIDTH ; j++){
            grid[i][j] = ' ';
        }
    }
}

void printGrid(char grid[HEIGHT][WIDTH])
{
    for(int i = 0; i < HEIGHT ; i++){
        for(int j = 0; j < WIDTH ; j++){
            cout << grid[i][j];
        }
        cout << '\n';
    }
}

int main(int argc, const char * argv[])
{
    char grid[HEIGHT][WIDTH];
    setupGrid(grid);
    grid[5][5] = 'X';
    printGrid(grid);
    return 0;
}

