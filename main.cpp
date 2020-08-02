//
//  main.cpp
//  Shapes-C
//
//  Created by Luke Clover on 8/2/20.
//  Copyright © 2020 Luke Clover. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Drawer.h"

int main(int argc, const char * argv[]) {
    
    Rectangle *m_Rectangle = new Rectangle(3,4);
    Circle *m_Circle = new Circle(5);
    
    Drawer rDrawer(m_Rectangle);
    Drawer cDrawer(m_Circle);
    
    rDrawer.draw();
    cDrawer.draw();

    delete m_Circle;
    delete m_Rectangle;
    
    return 0;
}
