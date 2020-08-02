//
//  Shape.h
//  Shapes-C
//
//  Created by Luke Clover on 8/2/20.
//  Copyright © 2020 Luke Clover. All rights reserved.
//

#ifndef Shape_h
#define Shape_h

class Shape {
public:
    Shape() {cout << "Shape created." << endl;}
    virtual ~Shape() {cout << "Shape destroyed." << endl;}
    //virtual void draw(Drawer*) = 0;
};


#endif /* Shape_h */
