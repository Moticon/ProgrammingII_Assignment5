#pragma once
/*
 * File: Settings Manager
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *   contains the settings manager class header
 */

class SettingsUI; // had to have a forward declaration of partner class

/*
 *  This keeps track of two settings - what color and what shape we're drawing.
 */
class SettingsManager {
private:
	bool drawingASquare;  // if true, we're drawing a square. else - circle
	Color currentColor;	  // an enumerated type, keeps track of current color being drawn
public:
	/*
	 *  Constructor - is fed the data to get things started. 
	 */
	SettingsManager(); // The constructor

	// getter for color
	Color getCurrentColor()
	{
		return currentColor;
	}

	// getter for drawingASquare boolean
	bool getDrawingASquare() {
		return drawingASquare; 
	}

	void setOptions(SettingsRecord options);

	SettingsRecord getOptions();
};

