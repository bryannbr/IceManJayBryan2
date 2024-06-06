#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
class StudentWorld;

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp

#endif // ACTOR_H_
class Actor : public GraphObject
{
public:
	Actor(int imageID, int startX, int startY, StudentWorld* studwpointerS, Direction startDirection, float size, unsigned int depth) : GraphObject(imageID, startX, startY, startDirection, size, depth)
	{
		studwpointer = studwpointerS;
		isAlive = true;
	}
	StudentWorld* getWorld()
	{
		return studwpointer;
	}
	virtual void doSomething()
	{

	}
	virtual void isDead()
	{
		isAlive = false;
	}
	virtual bool isProtester()
	{
		return false;
	}
private:
	StudentWorld* studwpointer;
	bool isAlive;
};


class Ice : public Actor
{
public:
	Ice(int startX, int startY, StudentWorld* sw)
		: Actor(IID_ICE, startX, startY, sw, right, 0.25, 3)
	{
	}
	virtual ~Ice()
	{
		;
	}
	virtual void doSomething()
	{
		;
	}
};

class Iceman : public Actor
{
public:
	Iceman(int startX, int startY, StudentWorld* studwpointer) : Actor(IID_PLAYER, startX, startY, studwpointer, right, 1.0, 0)
	{

	}
	virtual ~Iceman() { ; }
	void moreGold()
	{
		bribeGold++;
	}
	void addSonarKit()
	{
		sonar++;
	}
	void moreSquirtCharge()
	{
		squirtCharge += 5;
	}
	int getGold()
	{
		return bribeGold;
	}
	int getSonar()
	{
		return sonar;
	}
	int getSquirts()
	{
		return squirtCharge;
	}
private:
	int squirtCharge;
	int bribeGold;
	int sonar;
};

