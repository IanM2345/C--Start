#include<iostream>
#include<cmath>

int main(){

    char operation;
    double num1, num2;

    std::cout<<"Welcome to this Simple Calculator!"<<'\n';
    std::cout<<"Please one of the following operations:" << '\n';
    std::cout<<"1. Addition: +" << '\n' <<"2.Subtraction: -"<<'\n'<<"3.Division: /"<<'\n'<<"4.Multiplication: *"<<'\n'<<"5.Remander: %"<<'\n';
    std::cin>>operation;
    std::cout<<"Enter the first number: "<<'\n';
    std::cin>>num1;
    std::cout<<"Enter the second number: "<<'\n';
    std::cin>>num2;

    switch(operation){
        case '+':
        std::cout<<"The result is: "<<num1+num2<<'\n';
        break;
        case '-':
        std::cout<<"The result is: "<<num1-num2<<'\n';
        break;
        case '/':
        if(num2!=0){
            std::cout<<"The result is: "<<num1/num2<<'\n';
        }
        else{
            std::cout<<"Error! Division by zero is not allowed"<<'\n';
        }
        case '*':
           std::cout<<"The result is: "<<num1 * num2<<'\n';
           break;
        case '%':
          if(num2!=0){
            std::cout<<"The result is: "<<std::fmod(num1,num2)<<'\n';
          }else{
            std::cout<<"Error! Division by zero is not allowed"<<'\n';
          }
        default:
           std::cout<<"This a simple calculator. It has its limits"<<'\n';
           break;
     return 0;
}