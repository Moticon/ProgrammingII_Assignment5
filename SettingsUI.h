#pragma once

/*
 * File: Settings UI class file
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 * Contains the Settings UI class file and constants related to drawing the menu
 *  and buttons. 
 */


#include "PaintHeader.h"

class SettingsManager; // have to have a forward declaration of this class

// constants only used by SettingsUI

const float BUTTON_THICKNESS = 2.0f;			// How thick is the border of a button? 
const float BUTTON_X = 40.0f;					// What is the horizontal offset of all buttons? 
const float TOPBUTTON_Y = 50.0f;				// THe top button is 50 pixels from the top of the window
const float BUTTON_Y_OFFSET = BUTTON_RADIUS * 2.0f + 15.0f;	// The button offset is the distance
															// from the top of one button, down to the top of the next button below
const float DIVIDER_LINE_THICKNESS = 3.0f;		// The divider line is 3 pixels wide
const float DIVIDER_LINE_HEIGHT = WINDOW_HEIGHT; // the divider line is as tall as the window
const unsigned int TEXT_SIZE = 20;				// text is 20 pixels high
const float TEXT_X_OFFSET = 15.0f;				// The text of labels starts 15 pixels from left of screen
const float TEXT_DISTANCE_ABOVE_ICON = 10.0f;	// the text bottom should be 10 pixels above the button it describes

/*
 *  The settgins UI class is responsible for several actions:
 *   1) Draw the buttons and labels that allow the user to select color and shape
 *   2) Handle button clicks and let the setting manager know options are changing
 *   3) Draw
 */
class SettingsUI {
private:
	RectangleShape dividerLine; // we have a rectangle to draw the divider
	CircleShape selectCircleButton;  // A button if the user wants to draw circles
	RectangleShape selectSquareButton;  // A button if the user wants to draw squares.

	CircleShape blueButton; // the button to press to draw blue
	CircleShape redButton;  // button for red
	CircleShape greenButton;  // button for green.

	Font font;			// the font read from the font file, for text
	Text colorTitle;	// letters, size, description of the text to draw on screen
	Text shapeTitle;	// text for the title above the shape selection

public:
	// Constructor - needs settings manager to get initial settings.
	SettingsUI(SettingsManager mgr);\

	/***************** REQUIRED REFACTORING ********************
	* When you have time you have to take the checkForButtonClick 
	* and move it into this class. IT was erroneously placed in the 
	* settingsManager class. 
	*/

	// update settings - get information from settingsManager
	// and then modify button display to reflect settings.
	void updateSettings(SettingsManager mgr);

	void checkForButtonClick(Vector2f mouseLocation, SettingsManager& settingsManager);

	// draw all the stuff in the window
	void drawUI(RenderWindow &window);
};

