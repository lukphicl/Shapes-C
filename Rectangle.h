//
//  Rectangle.h
//  Shapes-C
//
//  Created by Luke Clover on 8/2/20.
//  Copyright © 2020 Luke Clover. All rights reserved.
//

#ifndef Rectangle_h
#define Rectangle_h

#include "Shape.h"
using namespace std;

class Rectangle: public Shape {
public:
    Rectangle() {cout << "Default Rectangle created" << endl;}
    Rectangle(int rLength, int rWidth) {
        length = rLength;
        width = rWidth;
        cout << "Rectangle created" << endl;
    }
    virtual ~Rectangle() {cout << "Rectangle destroyed" << endl;}
    //virtual void draw() {cout << "Rectangle area: " << (length*width);}
    
private:
    int length;
    int width;
};


#endif /* Rectangle_h */
