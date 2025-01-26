#include <iostream>

int main(){

    int num1,num2,num3;

    std::cout<<"Enter three numbers so that they fulfill the following conditions: "<<'\n'<<"All three numbers are positive"<<'\n'<<"Atleast one of the numbers is even"<<'\n'<<"The sum of the three numbers is greater than 100"<<'\n';
    std::cout<<"Enter first number"<<'\n';
    std::cin>>num1;
    std::cout<<"Enter second number"<<'\n';
    std::cin>>num2;
    std::cout<<"Enter third number"<<'\n';
    std::cin>>num3;

    if (num1>0 && num2>0 && num3>0){
        if(num1%2==0 || num2%2==0 || num3%2==0){
            if(num1+num2+num3>100){
                std::cout<<"The conditions are fulfilled"<<'\n';
        }else{
            std::cout<<"The sum of the numbers is not greater than 100"<<'\n';
        }
        }else{
            std::cout<<"None of the numbers is an even number"<<'\n';
        }
    }else{
        std::cout<<"Not all the numbers are postive";
    }



    return 0;
}