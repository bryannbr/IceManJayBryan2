#include "StudentWorld.h"
#include <string>
using namespace std;

GameWorld* createStudentWorld(string assetDir)
{
	return new StudentWorld(assetDir);
}

int StudentWorld::init()
{
	return GWSTATUS_CONTINUE_GAME;
}


int StudentWorld::move()
{
	/*if (iceMan->alive())
	{
		iceMan->doSomething();
	}*/


	return GWSTATUS_CONTINUE_GAME;

}

void StudentWorld::cleanUp()
{

}
// Students:  Add code to this file (if you wish), StudentWorld.h, Actor.h and Actor.
