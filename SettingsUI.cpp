/*
 * File: SettingsUI.cpp - 
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *   This is the code implementation to manage the User Interface 
 *     of the Options and menu buttons on screen
 */

#include "PaintHeader.h"

// SettingsUI - The constructor. 
//  Input: The settings Manager - which has the current settings we 
//     need to set up all the buttons correctly. 
//  Output: technically, an object....
SettingsUI::SettingsUI(SettingsManager mgr) {
	updateSettings(mgr);

	// create the divider line
	dividerLine.setSize(Vector2f(DIVIDER_LINE_THICKNESS, DIVIDER_LINE_HEIGHT));
	dividerLine.setPosition(Vector2f(DIVIDER_LINE_X, DIVIDER_LINE_Y)); // put the divider in place. 
	if (!font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
		die("Couldn't load font file!"); 
	
	// create the title to select a shape
	shapeTitle.setString("Select Shape");
	shapeTitle.setPosition(TEXT_X_OFFSET, TOPBUTTON_Y - TEXT_DISTANCE_ABOVE_ICON - TEXT_SIZE);
	shapeTitle.setFont(font); 
	shapeTitle.setCharacterSize(TEXT_SIZE); 
	shapeTitle.setFillColor(Color::White); 

	// create the title to select a color
    colorTitle.setString("Select Color"); 
	colorTitle.setPosition(TEXT_X_OFFSET, TOPBUTTON_Y + 4 * BUTTON_Y_OFFSET - TEXT_DISTANCE_ABOVE_ICON - TEXT_SIZE);
	colorTitle.setFont(font); 
	colorTitle.setCharacterSize(TEXT_SIZE); 
	colorTitle.setFillColor(Color::White); 
}

/*
 *  updateSettings - This function gets the current settings
 *     from the settings manager and modifies the local record
 *     of them. Then it rebuilds the buttons to reflect the settings.
 *  Input: settingsManager object - needed to get current settings
 *  output - none
 */
void SettingsUI::updateSettings(SettingsManager mgr)
{
	// there are two settings - a boolean : are we drawing a square? 
	//							a color - what color are we drawing. 
	// Get the current settings from the settings manager. 
	bool drawingASquare = mgr.getDrawingASquare();	// are we drawing a square or a circle?
	Color currentColor = mgr.getCurrentColor(); 	// what is our current color?

	// set the fill colors of the buttons based on which type of shape is 
	// being drawn 
	if (drawingASquare) {
		selectCircleButton.setFillColor(Color::Transparent); // Make the interior clear
		selectSquareButton.setFillColor(currentColor);
	}
	else {
		selectCircleButton.setFillColor(currentColor);
		selectSquareButton.setFillColor(Color::Transparent);
	}

	// set up the select circle button
	selectCircleButton.setOutlineColor(currentColor);           // paint the outside
	selectCircleButton.setOutlineThickness(BUTTON_THICKNESS);   // set thickness for button
	selectCircleButton.setPosition(BUTTON_X, TOPBUTTON_Y);      // Select Circle button is at top of screen
	selectCircleButton.setRadius(BUTTON_RADIUS); 

	// set up the select square button.
	selectSquareButton.setOutlineColor(currentColor);
	selectSquareButton.setOutlineThickness(BUTTON_THICKNESS);
	selectSquareButton.setPosition(BUTTON_X, TOPBUTTON_Y + BUTTON_Y_OFFSET);
	selectSquareButton.setSize(Vector2f(SQUARE_BUTTON_SIZE, SQUARE_BUTTON_SIZE)); 

	// Set up the color buttons
	// for each color button if the current color matches, make it a solid button
	//  if it doesn't match the color we're drawing, then make the button hollow
	blueButton.setOutlineColor(Color::Blue);           // paint the outside
	if (currentColor == Color::Blue)
		blueButton.setFillColor(Color::Blue);
	else
		blueButton.setFillColor(Color::Transparent); 
	blueButton.setOutlineThickness(BUTTON_THICKNESS);   // set thickness for button
	blueButton.setPosition(BUTTON_X, TOPBUTTON_Y+4*BUTTON_Y_OFFSET);      // Select Circle button is at top of screen
	blueButton.setRadius(BUTTON_RADIUS);

	redButton.setOutlineColor(Color::Red);           // paint the outside
	if (currentColor == Color::Red)
		redButton.setFillColor(Color::Red);
	else
		redButton.setFillColor(Color::Transparent);
	redButton.setOutlineThickness(BUTTON_THICKNESS);   // set thickness for button
	redButton.setPosition(BUTTON_X, TOPBUTTON_Y + 5 * BUTTON_Y_OFFSET);      // Select Circle button is at top of screen
	redButton.setRadius(BUTTON_RADIUS);

	greenButton.setOutlineColor(Color::Green);           // paint the outside
	if (currentColor == Color::Green)
		greenButton.setFillColor(Color::Green);
	else
		greenButton.setFillColor(Color::Transparent);

	greenButton.setOutlineThickness(BUTTON_THICKNESS);   // set thickness for button
	greenButton.setPosition(BUTTON_X, TOPBUTTON_Y + 6 * BUTTON_Y_OFFSET);      // Select Circle button is at top of screen
	greenButton.setRadius(BUTTON_RADIUS);
}

// Check for a button click over one of teh buttons. 
// Inputs:
//     The location (x and y) of the mosue
//     The Settings UI to retrieve the descriptions of the buttons (mainly the x/y location)
//       and see if the mouse is in that region. 
//  Outputs: None. 
void SettingsUI::checkForButtonClick(Vector2f mouseLocation, SettingsManager& settingsManager) {
	/*
	 *  TODO: Handle Button Clicks inside the options selection region.
	 *    If a mouse click occurs this method will be called (no matter where the mouse click occurred)
	 *    You must create a settingsRecord from the current settings first! Use the settingsManager's
	 *    getOptions() method.
	 *
	 *    You must check both shape buttons to see if the mouse was clicked in one of them.
	 *       if the mouse was clicked in one of them modify the settings record's boolean
	 *    You must also check all three color buttons. If one of them was pressed you must update
	 *       the settings record's current color to match.
	 *
	 *    At the end of the function you must call the SettingsUI's setOptions(SettingsRecord) method
	 *      and pass it the settings record.
	 */
}

// drawUI - Draw the user interface area of the window.
// inputs: window - the drawing window.
// outputs - none
void SettingsUI::drawUI(RenderWindow& window) {
	/*
	 *   TODO: Fill in the function that draws all the
	 *     current settings graphical elements on the screen.
	 *     This is quite simple. Just make a call to 
	 *     window's "draw(shape)" method. 
	 * 
	 *     for example: "window.draw(dividerLine);"
	 * 
	 *     draw everything in this class on the screen. 
	 */
}