#include <iostream>
#include<string>   
#include"Human.h"
#include"Computer.h"
#include"Guess.h"
#include"Player.h"
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Player name:";
	string hname;
	cin >> hname;
	Human human(hname);
	Computer comp;  //***why cannot use()???
	while ((human.Getscore() != 0) && (comp.Getscore() != 0)) {
		Guess hresult = human.getGuess();
		Guess comresult = comp.getGuess();
		int result =hresult.compare(comresult);
		if ( result == 1) {
			--comp;
		}
		if (result == -1) {
			--human;
		}
		cout<<"Human:"<<human.Getscore()<<"   ";
		cout<<"Computer:"<<comp.Getscore()<<endl<<endl;
	}
	if (human.Getscore() == 0) {
		cout << "Human WON!!!" << endl;
	}
	if (comp.Getscore() == 0) {
		cout << "The computer WON!!!" << endl;
	}
	char c;
	cin >> c;
}