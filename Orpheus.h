// Orpheus.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <fstream>
// Remove later
#include <string>

class AudioManager {
private:
	unsigned numSongs;
public:
	
	// Constructor/Destructor
	AudioManager();
	~AudioManager();
	
	// Accessors
	unsigned getNumSongs();

	// Modifiers
	void load(const char* pathToSong);

};