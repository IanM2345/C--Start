#include <iostream>
#include <ctime>

int main(){
    
    //Pseudo Random Numbers

    srand(time(NULL));

    int num1 = (rand() % 6) +1;

    std::cout<< num1 <<'\n';

    return 0;
}