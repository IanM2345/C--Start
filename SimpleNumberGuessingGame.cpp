#include <iostream>

int main(){

    int num;
    int guess;
    int guessCount = 0;

    srand(time(0));

    num= rand()%100+1;

    std::cout<<"Welcome to the number guessing game"<<'\n';

    do
    {
        std::cout<<"Guess a number between 1 and 100"<<'\n';
        std::cin>>guess;
        guessCount++;
        int result =std::abs (guess-num);
        if(result>15){
            std::cout<<"cold"<<'\n';
        }
        else if(result>8){
            std::cout<<"warm"<<'\n';
        }else if(result<=5){
            std::cout<<"hot"<<'\n';
        }else{
            std::cout<<"Correct. Took you "<<guessCount << " guesses";
        }
    } while (guess !=num);
    

    return 0;
}