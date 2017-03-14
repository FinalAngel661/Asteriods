
//#include "sfwdraw.h"
#include "MenuState.h"
#include "GameState.h"
#include "GameStateEnum.h"

/*
The main function should be used for application state management.
Currently, only one state is implemented here, you'll need to add additional
and get them to behave properly.
*/
void main()
{
	sfw::initContext();

	STATE state = STARTMENU;

	GameState gs;
	MenuState ms;

	gs.init(); // called once
	ms.init();

	//gs.play(); // Should be called each time the state is transitioned into

	ms.play();

	while (sfw::stepContext())
	{
		float dt = sfw::getDeltaTime();

		size_t nextState = 0;

		switch (state)
		{
		case SPLASH:
			//Splash.play();
			break;
		case STARTMENU:
			ms.step();
			ms.draw();
			nextState = ms.next();
			break;
		case GAME:
			/*game.init(font);
			game.play();*/
			break;
		case ENDGAME:
			/*game.update(dt);
			game.draw();
			state = game.next();*/
			break;

		}

		if (nextState == 1) state = GAME;
	}

	//gs.next(); Determine the ID of the next state to transition to.


	gs.stop(); // should be called each time the state is transitioned out of

	gs.term(); // called once


	sfw::termContext();

}


//#include "sfwdraw.h"
//#include "GameState.h"
//
//
///*
//The main function should be used for application state management.
//Currently, only one state is implemented here, you'll need to add additional
//and get them to behave properly.
//*/
//void main()
//{
//	sfw::initContext();
//
//
//	GameState gs;
//
//	gs.init(); // called once
//
//	gs.play(); // Should be called each time the state is transitioned into
//
//	while (sfw::stepContext())
//	{
//		gs.step(); // called each update
//		gs.draw(); // called each update
//
//				   //gs.next(); Determine the ID of the next state to transition to.
//	}
//
//	gs.stop(); // should be called each time the state is transitioned out of
//
//	gs.term(); // called once
//
//
//	sfw::termContext();
//
//}