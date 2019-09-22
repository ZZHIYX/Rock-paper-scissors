#pragma once
#include <string>
#include<iostream>
#include"Guess.h"
#include"Player.h"
using namespace std;


class Human:public Player  //don't forget this£¡£¡ public!
{
private:
	string name;
public:
	Human(string nm);
	~Human();
	inline const string Getname();
	Guess getGuess() const;
};

