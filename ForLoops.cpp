#include <iostream>

int main(){

    std::string name;

    do{
        std::cout << "Enter your name: " << '\n';
       std::getline(std::cin,name);
    }while (name.empty());

    int lettercount = 0;
    for(int i=0; i<name.length() ;i++){
            
            if (name [i]!=' '){
                lettercount++;
            }
             
    }

    std::cout<< "There are " << lettercount << " letters in your name";


    return 0;
}