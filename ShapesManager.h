#pragma once
/*
 * File: ShapesManager.h - contains class header file
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  The Shapes Manager class simply maintains a vector of shapes that need
 *  to be drawn on the screen. 
 */
#include "PaintHeader.h"

/*  ShapesManager class 
 *    keeps a vector of pointers to drawing lists. 
 *    this is added to by DrawingUI, 
 *    and DrawingUI also gets the list and draws it
 */
class ShapesManager {
private:
	vector<DrawingShape*> shapeList; // list of drawing shapes on the screen. 

public:
	void AddShape(DrawingShape* shape); // pop a shape on the end of the list please!

	void AddShape(PaintShapeRecord record);

	// return the entire list to DrawingUI so that it can draw it. 
	const vector<DrawingShape*> getShapeList() {
		return shapeList;
	}
};