#include <iostream>
#include "Orpheus.h"

int main() {
	AudioManager Orpheus;

	std::cout << "There are " << Orpheus.getNumSongs() << " songs in the Orpheus audio manager." << std::endl;
	
	return 0;
}