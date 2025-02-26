// Orpheus.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>

class AudioManager {
private:
	unsigned numSongs;
public:
	
	// Constructor/Destructor
	AudioManager();
	~AudioManager();
	
	// Accessors
	inline unsigned getNumSongs();

};