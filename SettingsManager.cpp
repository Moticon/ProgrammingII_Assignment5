/*
 * File: SettingManager.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *   This has the code used by the Settings Manager - this just
 *    manages the drawing options. 
 */

#include "PaintHeader.h"

// this will eventually change to be passed the file manager
// then it will ask the file manager to read this information? 
// then we can remove the file stuff from Main and hide it in a FileManager class. 
SettingsManager::SettingsManager() {
		drawingASquare = false; // default is to draw a cirle
		currentColor = Color::Green;
}


void SettingsManager::setOptions(SettingsRecord options) {
	drawingASquare = options.drawingASquare;
	currentColor = Color(options.color); 
}

SettingsRecord SettingsManager::getOptions() {
	SettingsRecord record;
	record.color = currentColor.toInteger(); 
	record.drawingASquare = drawingASquare;

	return record;
}