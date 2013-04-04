//
//  Square.h
//  GameOfLife
//
//  Created by Kieran Gleeson on 23/03/2013.
//  Copyright (c) 2013 Kieran Gleeson. All rights reserved.
//

#ifndef __GameOfLife__Square__
#define __GameOfLife__Square__

#include <iostream>

#endif /* defined(__GameOfLife__Square__) */

class Square{
    int x, y;
    int height, width;
    bool shouldFlip = false;
    bool currentState = false;
    int indexNum;
public:
    Square(int, int, int);
    void setCurrentStateTrue();
    void setShouldFlip();
    bool getCurrentState();
    bool getShouldFlip();
    void flipSquare();
    int getIndexNum();
};

