#include "Game.h"

//Private Functions
void Game::Init(){
	this->vm.width = 640;
	this->vm.height = 480;
	
	this->window = new sf::RenderWindow(this->vm, "Monkez2D - Empty Project", sf::Style::Titlebar | sf::Style::Close);
}

//Conductor / Destructors
Game::Game(){
	this->Init();
}

Game::~Game(){
	delete this->window;
}

//Accessors
const bool Game::running() const{
	return this->window->isOpen();
}

//Functions

void Game::pollEvents(){
	while(this->window->pollEvent(this->ev)){
		switch (this->ev.type){		
		 	case sf::Event::Closed:
				this->window->close();
				break;
							
			case sf::Event::KeyPressed:
				if(this->ev.key.code == sf::Keyboard::Escape)
					this->window->close();
				break;
		}
	}
}

//Updates Game Logic
void Game::Start(){
	
}

void Game::Update(){
	
	this->pollEvents();//DO NOT DELETE THIS
	
	//Write your code here
	
}

//Render Game Objects
void Game::Render(){
	
	this->window->clear();//Clear last frame
	
	//Draw Here	
	
	this->window->display();//Display new one
}
