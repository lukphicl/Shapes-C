//
//  Circle.h
//  Shapes-C
//
//  Created by Luke Clover on 8/2/20.
//  Copyright © 2020 Luke Clover. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

#include "Shape.h"
using namespace std;

class Circle: public Shape {
public:
    Circle(){cout << "Default circle created" << endl;}
    Circle(int cRadius) {
        radius = cRadius;
        cout << "Circle created" << endl;
    }
    virtual ~Circle() {cout << "Circle destroyed" << endl;}
    virtual void draw() {cout << "Circle area: " << (radius*3.14) << endl;}
    
private:
    int radius;
};

#endif /* Circle_h */
