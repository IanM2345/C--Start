#include <iostream>

int main(){
    
    std::string name;
    int age;

    while (name.empty())
    {
       std::cout << "Enter your name: "<<'\n';
       std::getline(std::cin, name);
    }

    std::cout <<"Hello " << name << "." <<'\n';
    

    return 0;
}