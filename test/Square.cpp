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

bool Square::getShouldFlip()
{
    return shouldFlip;
}

void Square::flipSquare()
{
    currentState = !currentState;
}


