#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

#include "wall.h"

class Background : public Wall
{
	int type;														// zmienna informujaca o typie bloku
	sf::Texture backgroundTexture;									// tesktura tla

public:
	/* Konstruktor bezargumentowy ustawiajacy typ bloku */
	Background();

	/* Metoda wczytujaca odpowiednia teksture tla */
	virtual void SetUp() override;
};