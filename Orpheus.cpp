#include "Orpheus.h"

AudioManager::AudioManager() {
	numSongs = 0;
}

AudioManager::~AudioManager() {

}

inline unsigned AudioManager::getNumSongs() {
	return numSongs;
}
