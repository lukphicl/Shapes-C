//
//  Drawer.h
//  Shapes-C
//
//  Created by Luke Clover on 8/2/20.
//  Copyright © 2020 Luke Clover. All rights reserved.
//

#ifndef Drawer_h
#define Drawer_h

#include <iostream>
#include "Shape.h"

class Drawer {
public:
    Drawer() {cout << "Default drawer created" << endl;}
    Drawer(Shape* mShape) {
        shape = mShape;
        cout << "Drawer created" << endl;;}
    ~Drawer(){
        shape = NULL;
        delete shape;
        cout << "Drawer deleted" << endl;
    }
    void draw() {shape->draw();}
    
private:
    Shape* shape;
};

#endif /* Drawer_h */
