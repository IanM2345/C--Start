#include <iostream>

int main(){

    int age;

    do{
        std::cout << "You Have To Be Eighteen to enter"<<'\n';
        std::cout <<"Please enter your age." <<'\n';
        std::cin >> age;
    }while(age<18);

    std::cout << "Welcome to the party" << '\n';

    return 0;
}