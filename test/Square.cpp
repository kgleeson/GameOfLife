//
//  Square.cpp
//  GameOfLife
//
//  Created by Kieran Gleeson on 23/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//
#include "Square.h"

Square::Square(int a, int b, int c)
{
    width = a;
    height = b;
    indexNum = c;
}

void Square::setPos(int a, int b)
{
    x = a;
    y = b;
}

void Square::setCurrentStateTrue()
{
    currentState = true;
}

void Square::setShouldFlip()
{
    shouldFlip = true;
}

bool Square::getCurrentState()
{
    return currentState;
}






