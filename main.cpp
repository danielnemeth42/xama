#include <iostream>
#include <string>

using namespace std;

struct player {
	int hp;
	int coins; 
	int atk;	
	};




int main (){
	player p1;
	p1.hp = 100;
	p1.coins = 0;
	p1.atk = 3;
	cout << "o progama esta funcionando corretamente!\n";
	return 0;
}
