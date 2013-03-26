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
    int neighbour;
/*
 Neighbours
 -81 -80 -79
 -1   X    1
  79  80  81
*/
    for(int i = -1; i < 2; i++){
        if(x >= 0){
            for(int j = -1; i < 2; j++){
                if(j >= 0){
                    neighbour = x + i + ((y + j) * width);
                    if(arrayName[neighbour]->currentState){
                        totalNeighbours++;
                    }
                }
            }
        }
    }
    return totalNeighbours;
}




