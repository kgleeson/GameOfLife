//
//  Square.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 23/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#include "Square.h"

Square::Square(int a, int b){
    width = a;
    height = b;
    
}

void Square::setPos(int a, int b){
    x = a;
    y = b;
}

void Square::setCurrentState(){
    currentState = true;
    
}

void Square::setShouldFlip(){
    shouldFlip = true;
}

int Square::findNeighbours(Square arrayName[]){
    int totalNeighbours = 0;
    int neighbour;
    
    for(int i = -1; i < 2; i++){
        if(x >= 0){
            for(int j = -1; i < 2; j++){
                if(j >= 0){
                    neighbour = x + i + ((y + j) * width);
                    if(arrayName[neighbour].currentState == true){
                        totalNeighbours++;
                    }
                }
            }
        }
    }
    return totalNeighbours;
}




