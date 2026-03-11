#pragma once
#include <string>
#include <iostream>

class Player
{
protected:

	std::string Jobname;
	int Level;
	int HP;
	int MP;
	int PATK;
	int MATK;
	int PDEF;
	int MDEF;
	int PACC;
	int MACC;
	float MoveSpeed;

public:

	Player(std::string Job, int level, int hp, int mp, int patk, int matk, int pdef, int mdef, int pacc, int macc, float movespeed)
		: Jobname(Job), Level(level), HP(hp), MP(mp), PATK(patk), MATK(matk), PDEF(pdef), MDEF(mdef), PACC(pacc), MACC(macc), MoveSpeed(movespeed)
	{ }
	
	virtual void Attack() = 0;
	virtual void Move() = 0;
	virtual void ShowInformation() = 0;
	virtual ~Player()
	{
		std::cout << "Player destryed\n";
	}
};