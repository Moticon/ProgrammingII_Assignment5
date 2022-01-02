/*
 * File:Shapes Manager.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  One HUGE function. 
 *  The addshape function is here. It could have been an inline function.
 */

#include "PaintHeader.h"

// Add a shape
//     add a shape to the vector containing shapes on screen.
// Inputs:
//     The argument is a pointer to a DrawingShape object
//     It will receive a pointer to a circle or square
//     which is a derived object from the base class DrawingShape. 
void ShapesManager::AddShape(DrawingShape* shapePointer) {
	shapeList.push_back(shapePointer); 
}

void ShapesManager::AddShape(PaintShapeRecord record) {
	// create the square or circle using a pointer to the base class "DrawingShape"
	// when the shape is created, its a derived class. 
	// but this is a pointer, so it can point to a derived class. (it will below)
	DrawingShape* shape;

	// find out if we're going to create a square or circle and create one. 
	// use the shape pointer we just created to point to the newly created derived shape.
	if (record.myShape == SQUARETYPE) {// we're drawing a square
		shape = new Square(record.myColor, SQUARETYPE, record.xPosition, record.yPosition);
	}
	else
		shape = new Circle(record.myColor, CIRCLETYPE, record.xPosition, record.yPosition);;

	// add the shape to the vector of onscreen shapes. 
	AddShape(shape);

}