/*
 * File: FileManger.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  This contains the class c++ code for the file manager
 */

#include "PaintHeader.h"
/*
 *  loadFile - This opens the file and reads the options record it hands that to the Settings Manager
 *     then it reads all the records which contain information about shapes where were on the screen
 *     it hands them, one at a time as a struct, to the ShapesManager, which adds them to the list
 *  Inputs:
 *    SettingsManager - passed by reference or you will just change a copy! used to pass settings record
 *    ShapesManager - passed by ref, all the shape records read are handed over so they can be added to the list.
 *  Return: nothing. 
 */
void FileManager::loadFile(SettingsManager &smgr,  ShapesManager &shapesManager) {
		// TODO - Student must write the loadFile function. 
		/*
		 *     This function should open the file, read the settings record and pass it to the settings manager
		 *       Then it should read all shapeRecords and pass each one to the Shape Manager to pass each one to the shapes manager
		 *       so it can add them to the vector of Circles and Squares that  need to be drawn. At the end it should close the file.
		 */
}

/*
 *  saveFile - This opens the file and writes the options record it gets from the Settings Manager
 *     then it writes all the records which contain information about shapes where were on the screen
 *     it gets a list from the ShapesManager, which it writes out as recordds. At the end it closes the file. 
 *  Inputs:
 *    SettingsManager -  used to get settings record
 *    ShapesManager - the list of shape records are fetched, then they are all written out. 
 *  Return: nothing
 */
void FileManager::saveFile(SettingsManager settingsManager, ShapesManager shapesManager) {
		// TODO - Student must write the saveFile function. file. 
		/* function: loadFile()
		 *     This function should open the save file, get the options record from the SettingsManager and write it out.
		 *     Then it should get the vector of shapes from the ShapesManager and write each of them out to the binary
		 *     file as a ShapeRecord. Note that the shape class has a built in method to return a record called 'getFileRecord();
		 */
}