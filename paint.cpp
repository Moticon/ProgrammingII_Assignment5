/*
 * File:paint.cpp - the file with main()
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  This has the main() function. It doesn't do much - create needed classes
 *    then loop until the window is closed. Check for mouse events and 
 *    tell the drawing UI's to draw their contents on the window.
 *    then display the window. 
 * 
 *   it's very simple at this level. 
 */
#include "paintheader.h"

int main()
{
	// Create the window for graphics. 
	//  The "Paint" is the text in the title bar on the window. 
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Paint!");
	
	// Limit the framerate to 60 frames per second
	window.setFramerateLimit(60);

	// create the class objects that we need at this level. 
	FileManager fileManager; 

	SettingsManager settingsMgr;  // keeps the current drawing options
	SettingsUI settingsUI(settingsMgr);		// draws settings options, handles clicks
	DrawingUI drawingUI;					// handles drawing objects and clicks to draw new ones!
	ShapesManager shapesManager;			// The object that keeps the list (vector object) of shapes on the screen. 

	fileManager.loadFile(settingsMgr, shapesManager); 

	Vector2f mouseLocation;					// Where is the mouse? When there's a mouse event we'll use this.

	/*  As long as the window is open we'll run this loop. It's pretty basic!
	 * 
  	 *   First  we check for events - did the window close? Was there a mouse click or  
	 *      mouse movement while the left button was down? If so call the UI handlers
	 *      to handle the mouse.
	 * 
	 *   Second - use the objects that handle Drawing to draw the menu UI and all objects in the 
	 *     drawing region. These draw everything.
	 * 
	 *   Third - display the window. 
	 *
	 */
	while (window.isOpen())
	{
		// check windows events, this is needed to check for window closing events. 
		Event event;

		// This while loop checks to see if anything happened since last time
		// we drew the window and all its graphics. 
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed) // Did the user kill the window by pressing the "X"?
				window.close();

			// Was there a mouse button pressed? or is it pressed? 
			if (event.type == Event::MouseButtonPressed) {
				
				// if mouse pressed, get the current x and  y, we'll need it!
				mouseLocation.x = static_cast<float>(event.mouseButton.x);
				mouseLocation.y = static_cast<float>(event.mouseButton.y); 
				cout << "Mouse pressed at: " << mouseLocation.x << ", " << mouseLocation.y << ".\n";

				// ask the settings manager to check if the click was on a button to change the options
				// This actually needs to be refactored over to the settingsUI object. 
				settingsUI.checkForButtonClick(mouseLocation, settingsMgr);	
				// and have the drawing UI see if this event was in the drawing region.
				drawingUI.checkForButtonClick(settingsMgr, mouseLocation, shapesManager); 
			}

			// This checks for a mouse move event and also verifies that the left button is still pressed.
			// if both are true, then we have a mouse drag event and we have to draw another object in the
			// drawing region .
			if (event.type == Event::MouseMoved && Mouse::isButtonPressed(Mouse::Left)) { // mouse drag event happened. 
				// get the mouse location.
				mouseLocation.x = static_cast<float>(event.mouseMove.x);
				mouseLocation.y = static_cast<float>(event.mouseMove.y);
				cout << "Mouse Moved (while button pressed) to " << mouseLocation.x << ", " << mouseLocation.y << "\n";

				// call the drawing UI to verify it's in the drawing region and then, if it is, create an object.
				drawingUI.checkForButtonClick(settingsMgr, mouseLocation, shapesManager);
			}
		}

		//===========================================================
		// Everything from here to the end of the loop is where you put your
		// code to produce ONE frame of the animation. The next iteration of the loop will
		// render the next frame, and so on. All this happens ~ 60 times/second.
		//===========================================================
		// clear the window with a black color. 
		window.clear(sf::Color::Black); 

		// call the settings UI and have it update it's current settings knowledge
		//   inside the settings UI, this will affect how it draws the buttons. 
		settingsUI.updateSettings(settingsMgr); 
		settingsUI.drawUI(window); 

		// now tell the drawing UI to draw the list of current painted objects 
		// onto the window. 
		drawingUI.drawShapes(window, shapesManager); 

		// now display the window, which is completely 'drawn' 
		window.display();

	} // end body of animation loop

	fileManager.saveFile(settingsMgr, shapesManager); 
	return 0;
}

