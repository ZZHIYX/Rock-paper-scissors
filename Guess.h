#pragma once

class Guess
{
private:
	char guess;
public:
	Guess();
	Guess(char a);
	Guess(int b);
	~Guess();
	char Getguess() const {
		return guess;               //form of inline!!
	}
	int compare(const Guess &other) const;
};

