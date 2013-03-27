//
//  Square.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 23/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//
#include "Square.h"

Square::Square(int a, int b, int c){
    width = a;
    height = b;
    iNum = c;
    
}

void Square::setPos(int a, int b){
    x = a;
    y = b;
}

void Square::setCurrentStateTrue(){
    currentState = true;
    
}

void Square::setShouldFlip(){
    shouldFlip = true;
}


int Square::findNeighbours(Square* arrayName[]){
    int totalNeighbours = 0;
    Square* neighbour;
    
    for(int xPos=std::max(0, x - 1); xPos<=x + 1 && xPos<=width; xPos++) {
        for(int yPos=std::max(0, y - 1); yPos<=y + 1 && yPos<height; yPos++) {
            if (x==0 && y==0) {
                continue;
            }
            neighbour = arrayName[x+(y*height)];
            if (neighbour->currentState){
                totalNeighbours++;
            }
        }
    }
    return totalNeighbours;
}




