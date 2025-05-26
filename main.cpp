#include <iostream>
#include <string>
#include "header.h"
int main (){
	person player;
	player.speed = 10;
	person enemy;
	enemy.speed = 5;
	test();
	battle(player, enemy);
	std::cout << "o progama esta funcionando corretamente!\n";
	return 0;
}
