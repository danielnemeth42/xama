#include <iostream>
#include <string>
#include <format>

using namespace std;

struct player {
	int hp;
	int coins;
	int atk;

	string to_string(){
		return "HP: " + std::to_string(hp) + " Coins: " + std::to_string(coins) + " Atk: " + std::to_string(atk);
	}
};

int main (){
	player p1;
	p1.hp = 100;
	p1.coins = 0;
	p1.atk = 3;
	cout << p1.to_string() << " o progama esta funcionando corretamente!\n";
	return 0;
}
