#pragma once
class Player
{
private:
	int score;

public:
	Player(int a);
	~Player();
	const int Getscore()const {
			return score;               //form of inline;
	}
	Player &operator--();            //Because it is the change of itself!£¡£¡so add "&"!!
};

