#pragma once
/*
 * File: Circle.h
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 * 
 * Contents Description: 
 *    This file contains the header for the Circle class

 */

#include "PaintHeader.h"

/* 
 * Circle is a derived class from the abstract base class Drawing shape
 * It is a wrapper for the circle object it maintains.
 *
 * All the values for a circle are maintained, but they are inherited from
 * the DrawingShape class.
 * 
 * TODO: Finish creating this Circle.h header and the definition file Circle.cpp. 
 * 
 * There is one private member variable - an SFML Circleshape object. 
 * 
 * The prototype for the constructor, draw(), and getFileRecord() methods are provided
 *    below. You must implement them in the .cpp file. 
 */
class Circle : public DrawingShape {
private:

public:
	/* 
	 * Simple constructor. Pass it the 4 vars
	 *  it will create the SFML constructor
	 */
	Circle(unsigned, ShapeType, float, float);

	// this will draw self onto the window, 1 line of code "window.draw(mySFMLCircleShape);"
	void draw(RenderWindow& window);

	// this will take the data in self and return as a struct. 
	// This is used by the DrawingUI class, which 
	// gets a list of current shapes in the drawing region
	// and on each one, it calls the "draw" method. 
	// This is a virtual function replacing the base class's version of same. 
	PaintShapeRecord getFileRecord();
};