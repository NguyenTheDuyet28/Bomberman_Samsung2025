#include <iostream>
#include <SFML/Graphics.hpp>

#include "background.h"

Background::Background()
	: type(backgroundBlock) {
};

void Background::SetUp()
{
	if (!backgroundTexture.loadFromFile("res/img/background.png"))
	{
		std::cout << "Load failed! " << std::endl;
		getchar();
	}

	LoadTexture(backgroundTexture);
}
