#include "Computer.h"
#include<iostream>
using namespace std;




Computer::Computer():Player(5)
{
}


Computer::~Computer()
{
}

Guess Computer::getGuess() const {
	Guess gue;                    //***why cannot add£¨£©£¿£¿£¿£¿
	cout << "Computer:" << gue.Getguess() << endl;
	return gue;
}