#pragma once
/*
 * File:
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *
 */

// includes go below
#include <iostream>
#include <fstream>

using namespace std;
// these two lines are specific to the SFML graphics library. 
#include <SFML/Graphics.hpp>
using namespace sf;

// Constants for Paint
const string SAVE_FILE = "paintSave.dat"; // name of the file where state is saved.
const float DISTANCE = 5.0f;			// When the ship moves it moves 5 pixels at a time. 
const int WINDOW_WIDTH = 600;			// window is 800 pixels wide
const int WINDOW_HEIGHT = 400;			// window is 600 pixels vertically "high"
const float CIRCLE_RADIUS = 10.0f;		// Radius of a circle that is drawn on the screen.
const float SQUARE_SIZE = 20.0f;		// size of a side of a square that is drawn on the screen
enum ShapeType {CIRCLETYPE, SQUARETYPE}; // used to make creation of circles and squares more readable
const float DIVIDER_LINE_X = 150.0f;	// The divider line is 150 pixels from the left side of the window
const float DIVIDER_LINE_Y = 0.0f;		// the divider line starts at the top of the window and goes down
const float BUTTON_RADIUS = 15.0f;		// The button radius of a selector button is 15 pixels, total width=30
const float SQUARE_BUTTON_SIZE = 2.0f * BUTTON_RADIUS; // Square Button side length is 2*15, 30 pixels

// structs for file I/O

// This structure is used to read or write the information about
//  a shape that is kept in the binary file.
struct PaintShapeRecord {
	unsigned myColor;		// what color is this shape?
	ShapeType myShape;		// what kind of shape is it?
	float xPosition;		// what is x? 
	float yPosition;		// what is y? 
};

// The settings record is used to read/write from the binary file
// It is very simple - only two settings to keep!
struct SettingsRecord {
	bool drawingASquare; // if true, we are /were drawing a square
	int color;			 // this is a color that is saved. 
};

// paint Class Headers
#include "SettingsManager.h"	// keeps track of current drawing options
#include "SettingsUI.h"			// handles drawing and listening in the options region
#include "DrawingShape.h"		// base class for a circle or a square
#include "Circle.h"				// wrapper class - keeps a circle object, eases save file writing/reading
#include "Square.h"				// wrapper class, like circle - but for a square
#include "DrawingUI.h"			// The drawing UI handles mouse clicks in the drawing region, and draws.
#include "ShapesManager.h"		// keeps a list of all shapes drawn in the drawing region.
#include "FileManager.h"

// paint Functions
void die(string message);		// a Bail-Out function. call it when you can't recover from an error. 
