#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>

#include "player.h"
#include "map.h"
#include "end_game_screen.h"

class Game
{
	sf::RenderWindow window;										
	sf::Vector2f windowSize;										
	Player player1{ "Player 1" };									
	Player player2{ "Player 2" };										
	Map map;														
	EndGameScreen endGameScreen;									// widok konca gry
	sf::Font font;													// czcionka
	bool isOver;													// zmienna informujaca czy gra sie skonczyla
	bool once = true; 
public:

	Game();

	
	void Update(const sf::Time deltaTime);

	
	void Draw();

	
	void Play();

	
	void PlayAgain();
};