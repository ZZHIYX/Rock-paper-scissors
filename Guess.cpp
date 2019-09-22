#include "Guess.h"
#include<iostream>  //Because of using rand()this function!



Guess::Guess()
{
	char inguess[3] = { 'R','P','S' };
	guess = inguess[rand() % 3];        //random()£¡£¡£¡
}

Guess::Guess(char a) {
	if (a == 'r' || a == 'R')
		guess = 'R';
	else if (a == 'p' || a == 'P')   //***should add else!!!else if!!! OR else part should be used at last!!Or it is 2 if loops.
		guess = 'P';
	else guess = 'S';    
}

Guess::Guess(int b) {
	if (b == 0)
		guess = 'R';
	else if (b == 1)
		guess = 'P';
	else guess = 'S';
}

Guess::~Guess()
{
}

int Guess::compare(const Guess &other) const {
	if (guess == other.Getguess())            //other.guess cannot be used!£¡£¡£¡other's cannot use it!!
		return 0;
	if (other.Getguess() == 'R') {
		if (guess == 'S')
			return 1;
		if (guess == 'P')
			return -1;
	}
	if (other.Getguess() == 'P') {
		if (guess == 'S')
			return -1;
		if (guess == 'R')     //should be complete because of comparation of guess!
			return 1;
	}
	if (other.Getguess() == 'S') {
		if (guess == 'P')
			return 1;
		if (guess == 'R')
			return -1;
	}
}