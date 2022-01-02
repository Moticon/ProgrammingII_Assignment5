/*
 * File:Functions.cpp
 * Author: Pat Smith
 * Date: 12/31/2021 - Happy New Year!!
 *
 * Contents Description:
 *  all the functions not in a class. - they're arent many of them. 
 */

#include "paintheader.h"
/*
* Put your own file documentation here.
*
*/

// die - this is called when there's a unrecoverable error and we're just 
// going to display a message and quit
// inputs: string message - the error message to help figure out what broke!
void die(string message) {
	cout << "I'm DYING!------" << endl << message << endl; 
	exit(-1);
}

