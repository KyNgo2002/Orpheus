#include <iostream>
#include "Orpheus.h"

int main() {
	AudioManager Orpheus;

	std::cout << "Therse are " << Orpheus.getNumSongs() << " songs in the Orpheus audio manager." << std::endl;
	Orpheus.load("C:\\Users\\kyngo\\source\\repos\\Orpheus\\TestFile.txt");
	return 0;
}