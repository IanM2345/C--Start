#include <iostream>

double square(double length);
double cube(double length);

int main(){

    double length;

    std::cout<<"Enter the length of the square to fing the area and volume of the cube"<<'\n';
    std::cin>>length;

    double area = square(length);
    double volume = cube(length);

    std::cout<<"The area of the cube is " << area << " cm^2" <<'\n';
    std::cout<<"The volume of the cube is " << volume << " cm^3";

    return 0;
}

double square(double length){

    double result = length*length;

    return result;
}

double cube(double length){
    double result = length*length*length;

    return result;
}