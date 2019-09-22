#include "Human.h"
#include <iostream>
using namespace std;



Human::Human(string nm) :Player::Player(3),	name(nm)  //pay attention to the form and name£¡£¡£¡!according to the requirement and it is a pre requirement of the function!
{
}


Human::~Human()
{
}

inline const string Human::Getname() {
	return name;
}

Guess Human::getGuess() const {
	char a;
	cout << "Enter(R,P,S):";
	cin >> a;
	Guess guess(a);
	cout << "Human:" << guess.Getguess() << "  ";
	return guess;
}