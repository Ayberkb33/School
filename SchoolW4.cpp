#include <iostream>
#include <cctype>

int main (){
    char T;

    std::cin >> T;

    if(T=='A'){
        std::cout << "You passed";

    }

    else if (T=='F'){
        std::cout << "You failed";

    }

    else {
        std::cout << "Enter A or F";
    }

    return 0;
}