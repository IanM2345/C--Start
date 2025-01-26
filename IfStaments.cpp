#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age"<< '\n';
    std::cin >> age;

    if(age>17){
        std::cout << "You are an adult. I am sorry for the pain your about to experience."<< '\n';
    }else if (age<=5){
        std:: cout << "Your just wee wittle baby." << '\n';
    }else{
        std::cout << "You are annoying"<< '\n';
    }


    return 0;
}