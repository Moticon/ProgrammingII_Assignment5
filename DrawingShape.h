#pragma once
/*
 * File:Drawing Shape.h
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  This contains the abstract base class "DrawingShape'
 */

#include "PaintHeader.h"
/*
 *  Drawing shape is an abstract base class. 
 *  Circle and Shape are derived from it. 
 * 
 * By having a base class we can polymorphically
 *   create both circles and squares and keep them 
 *   in the same vector variable. 
 */
class DrawingShape {
protected:
	unsigned myColor; // an enumerated type in paintHeader.h
	ShapeType myShape;  // an enumerated type in paintHeader.h
	float xPosition;    // upper left x locatin of shape
	float yPosition;    // upper left y location of shape
public:
	// this will draw self onto the window
	virtual void draw(RenderWindow& window) = 0;

	// this will take the data in self and return as a struct. 
	virtual PaintShapeRecord getFileRecord() = 0;
};