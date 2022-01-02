/*
 * File: DrawingUI.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *   Code to implement the Drawing UI methods. 
 */

#include "PaintHeader.h"

/*
*   Drawing UI check for Button Click method.
*     This is called when there's been a button click event in the drawing region. It checks to see 
*     if the click occurred in the drawing region. This is the region between the
*     top and bottom of the window, and the divider line on the left to the right edge of the screen. 
* 
*     if it occured in the drawing region it gets the current settings, creates
*     a shape and hands it to the shape manager. 
*/
void DrawingUI::checkForButtonClick(SettingsManager settingsMgr, Vector2f mouse, ShapesManager &shapesManager) {
	/* 
	 * TODO: You must write this method to check for button clicks in the paint region.
	 *   You must check for a click in this region by comparing the mouse's x and y value to the 
	 *   left side of the paint region (the divider line) and the right side of the region (the right
	 *   edge of the window AND the top and bottom of the window. 
	 *
	 *   If it's between all four of these boundaries the click is in the paint region 
	 *   and you should create a shape using the current settings.  You then must pass this shape
	 *   to the ShapesManager so it can add it to its list of shapes. 
	 * 
	 *   You DO NOT draw anything here. Just create the Circle or Square object and pass it to Shapes Manager. 
	 */
}

// This draws all the shapes on the screen.
// Inputs:  
//    Window - the window space to draw on.
//    ShapesManager - this guy will give us the vector of points to shapes.
// Return: Nothing
//    
void DrawingUI::drawShapes(RenderWindow &window, ShapesManager shapesManager) {
	/*
	 *  TODO: Fill in this drawShapes function in the DrawingUI class.   
	 *    This function should then use the ShapesManager's getShapeList to 
	 *    return a vector of pointers, which each point to a shape 
	 *    in the paint region. 
	 * 
	 *    After the list is retrieved from the ShapesManager, run a loop to 
	 *      draw each one. Note that every shape as a method to draw itself
	 *      onto the window you will pass it (see DrawingShape::draw(RenderWindow)
	 */
}
