
//#include "sfwdraw.h"
#include "GameState.h"
#include "MenuState.h"

enum STATE {SPLASH, STARTMENU, GAME, ENDGAME};

/*
The main function should be used for application state management.
Currently, only one state is implemented here, you'll need to add additional
and get them to behave properly.
*/
void main()
{
	sfw::initContext();

	STATE state;

	GameState gs;
	MenuState ms;

	gs.init(); // called once
	ms.init();

	//gs.play(); // Should be called each time the state is transitioned into

	ms.play();

	while (sfw::stepContext())
	{
		float dt = sfw::getDeltaTime();

		ms.step();

		//switch (state)
		//{
		//case SPLASH:
		//	Splash.play();
		//case STARTMENU:
		//	Splash.step();
		//	Splash.draw();
		//	state = Splash.next();
		//	break;
		//case GAME:
		//	game.init(font);
		//	game.play();
		//case ENDGAME:
		//	game.update(dt);
		//	game.draw();
		//	state = game.next();
		//	break;

		//}
	}
				   
	//gs.next(); Determine the ID of the next state to transition to.
	

	gs.stop(); // should be called each time the state is transitioned out of

	gs.term(); // called once


	sfw::termContext();

}