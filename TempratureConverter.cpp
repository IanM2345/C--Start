#include <iostream>

int main() {
    
    double temp;
    char unit;

    std::cout<< "Welcome tothe tempraure converter"<<'\n';
    std::cout<< "Please enter the temperature you want to convert: "<<'\n';
    std::cin>>temp;
    std::cout<< "Please enter the unit of the temperature (C for Celsius, F for Farenhiet(Forguve my spelling))"<<'\n';
    std::cin>>unit;

    char Unit = std::toupper(static_cast<unsigned char>(unit));

    if (Unit='F'){
        double celsius = (1.8*temp)+32;
        std::cout<< "The temperature in Celsius is: "<<celsius<<'\n';
    }else if(Unit='C'){
        double fahrenheit = (temp-32)/1.8;
        std::cout<< "The Temprature in Fahrenheit is: "<<fahrenheit<<'\n';
    }else{
        std::cout<< "Don't recognise that unit unfortunately"<<'\n';
    }

    return 0;
}