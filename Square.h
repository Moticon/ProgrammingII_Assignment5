#pragma once
/*
 * File:The derived class Square, derived from DrawingShape
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *Contains the very small, derived class for a square object. 
 */

#include "PaintHeader.h"
 /*
  * Square is a derived class from the abstract base class Drawing shape
  * It is a wrapper for the square object it maintains.
  *
  * All the values for a square are maintained, but they are inherited from
  * the DrawingShape class.
  */

// TODO - Finish the Square Class. Nothing is provided here, but finish
//   the Circle class first and then use it as a guide for what goes here.
//   Everything in the circle class should be implemented here, but obviously
//   here you use an SFML RectangleClass object with equal sides (it's a square)
//   instead of a circle. 
class Square : public DrawingShape {
private:
	/* There is only one member here, an SFML RectangleShape object. 
	*/
public:
	// all the methods in the Circle class should be here too!
};