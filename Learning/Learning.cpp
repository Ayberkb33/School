#include <iostream>

int main (){
srand(time(0));
int num = (rand()% 6) +1;

switch(num){
    case 1: std::cout << "You gain 5 gold";
        break; 
    case 2: std::cout << "You encounter an enemy";
        break;
    case 3: std::cout << "You lost 10 gold ";
        break;
    case 4: std::cout << "You fell in to a well";
        break;
    case 5: std::cout << "You encounter a friendly npc";
        break;
    case 6: std::cout << "JACKPOTT 100 GOLD !!";
        break;
}
std::cout << "Working";
return 0;
}
    