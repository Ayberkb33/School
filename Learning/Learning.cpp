#include <iostream>

int main (){
    std::cout << "************************Ready To Play***************************\n" ;
    srand(time(0));
    int number = (rand() % 200)+1;
    int guess, tries;
    
    do{
        std::cout << "Enter a Number = ";
        std::cin >> guess;
        tries++;

        if(guess > number){
            std::cout << "Too high\n";
        }
        
        else if(guess < number){
            std::cout << "Too low\n";
        }

        else{
            std::cout << "you Won number was = " << number << "\n You took = " << tries << " tries\n";
        }

    }while(number != guess);
    
    std::cout << "**************************Game Over*****************************\n";

}
    