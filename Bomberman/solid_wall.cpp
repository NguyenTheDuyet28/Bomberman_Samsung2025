#include <iostream>
#include <SFML/Graphics.hpp>

#include "solid_wall.h"
#include "block.h"

SolidWall::SolidWall()
	:type(solidBlock) {
};

void SolidWall::SetUp()
{
	if (!solid_texture.loadFromFile("res/img/SolidBlock.png"))
	{
		std::cout << "Load failed! " << std::endl;
		getchar();
	}

	LoadTexture(solid_texture);
}
