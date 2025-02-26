#include "Orpheus.h"
#include <filesystem>

AudioManager::AudioManager() {
	numSongs = 0;
}

AudioManager::~AudioManager() {

}

unsigned AudioManager::getNumSongs() {
	return numSongs;
}

void AudioManager::load(const char* pathToSong) {
	std::ifstream fileStream(pathToSong);
	if (fileStream.is_open()) {
		std::string line;
		while (std::getline(fileStream, line)) {
			std::cout << line << std::endl;
		}
		fileStream.close();
		std::cout << "Successfully loaded file!" << std::endl;
		numSongs++;
	}
	else {
		std::cerr << "Error opening file!" << std::endl;
	}
}
