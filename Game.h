#pragma once

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

/*
	Class that acts as the main engine.
*/

class Game{
	
	private:
		//Variables
		
		//Window
		sf::RenderWindow* window;
		sf::Event ev;
		sf::VideoMode vm;
		
		//Private functions
		void Init();
	public:
		//Conductors / Destructors
		Game();
		virtual ~Game();
		
		//Accessors
		const bool running() const;
		
		//Functions
		
		void pollEvents();
		void Start();
		void Update();
		void Render();
};
