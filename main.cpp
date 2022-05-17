#include "Game.h"

int main(){
	
	//Init Game Engine
	Game game;
	game.Start();
	
	//Main Loop
	while(game.running()){
		//Update
		game.Update();
		
		//Render
		game.Render();
	}
	
	//End Programm
	return 0;
}

