#ifndef HEADER_H
#define HEADER_H

void test(){
	std::cout << "header funcionando\n";
}

struct person {
	int speed;
};

void player_turn(){
	std::cout << "its the player's turn!\n";
}
void opp_turn(){
	std::cout << "the enemy attacks!\n";
}

void battle(person& player, person& enemy){
	(player.speed > enemy.speed) ? player_turn() : opp_turn();
}

#endif
