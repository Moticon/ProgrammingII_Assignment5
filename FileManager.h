#pragma once
/*
 * File: FileManger.h
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  This contains the class header file for the file manager
 */
#include "PaintHeader.h"

// CLASS FileManager
/*
 *  The file manager's job is to read from thee save file at the beginning of the program.
 *    and save all the state elements to the file when the window is closed. 
 */
class FileManager {
private:
	// nothing to see here... 
public:
	// empty constructor
	FileManager() {	}
	// this opens the file for reading, reads optinos and shapes and passes them off
	void loadFile(SettingsManager &smgr, ShapesManager &shapesManager);
	// this gets the current options and saves it, then gets all shapes and saves them.
	void saveFile(SettingsManager settingsManager, ShapesManager shapesManager);
};