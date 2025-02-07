#include <iostream>

int main(){

    std::string tvCharacters [] = {"Ted Mosby","Ted Lasso","Walter White","Jimmy Mcgill"};

    for (int i = 0; i<sizeof(tvCharacters)/sizeof(tvCharacters[0]);i++){
        std::cout << tvCharacters[i] << '\n';
    }

    return 0;
}