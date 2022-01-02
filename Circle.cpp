#include "PaintHeader.h"
/*
 * File: Circle.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  Contains the code for the derived class Circle - a shape!
 */

/*
*  The constructor for a Circle. 
*  Inputs:   
*    color of the shape
*    type of shape (circle or square)
*    x and y location  of shape. 
*/
Circle::Circle(unsigned color, ShapeType type , float x, float y) {
   // fill this in!
}

// this will draw self onto the window
void Circle::draw(RenderWindow& window) {
	// There's only one line of code in here!
}

// this will take the data in this object and return as a struct. 
// This is used by the file manager when writing objects to the binary file.
// the file manager needs a struct to write out. 
PaintShapeRecord Circle::getFileRecord() {
	// declare a Shape record, fill it in, and return it!
	// use the members of the base class to fill in the shape record.
}