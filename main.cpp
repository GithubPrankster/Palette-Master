#include <iostream>
#include "colorManagement.h"

int main(int argc, char *argv[]){
	std::cout << argv[1] << " " << argv[2] << std::endl; 
	Palette loaded(argv[1]);
	
	int width, height, channels;
	uint8_t* image = stbi_load(argv[2],
                                 &width,
                                 &height,
                                 &channels,
                                 STBI_rgb);
	std::cout << "Now rendering." << std::endl;
	writeRenderPalettized(loaded, image, width, height, channels);
	
	delete image;
	return 0;
}