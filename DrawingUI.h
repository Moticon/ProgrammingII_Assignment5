#pragma once
/*
 * File: DrawingUI.h
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *   The Drawing User Interface class handles user clicks
 *   and draws objects retrieved from the Shapes Manager
 */

#include "PaintHeader.h"

const float DRAWING_BUFFER = 5.0f; // The buffer is the border size
								   // at the edge of the drawing space. 
								   // no shapes should be in this region - it's prettier that way. 
class ShapesManager;  // this forward class declaration is required!

/*
 *  Drawing UI.  Handles clicks inside the drawing region.
 *      and draws all objects on the drawing window. 
 */
class DrawingUI {
private:
	
public:
	// empty constructor. This has no variables to initialize. 
	// it's a "doer" class!
	DrawingUI() {};

	// This is called when there's a click or a mouseMove
	// while the left button is pressed. 
	// This verifies that a shape should be drawn, if so it 
	// creates the shape and hands it to the Shapes Manager
	void checkForButtonClick(SettingsManager, Vector2f, ShapesManager&);

	// Simple function - get the list of shapes
	// iterate through the list and draw them on the window. 
	// The window must be passed by reference or your drawing
	// won't actually make it back to the calling function. 
	void drawShapes(RenderWindow&, ShapesManager);
};