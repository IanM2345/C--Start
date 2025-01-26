#include <iostream>

int main() {
    const double PI =3.142;
    double radius = 4.8;
    double diameter= radius *2;
    int height = 7;

    double C= PI * diameter;
    double A= 2*PI*(radius*radius);
    double V = A*height;


    std::cout <<"The diameter of the circle is " <<diameter << '\n';
    std::cout <<"The circumfrence of the circle is " <<C << '\n';
    std::cout <<"The area of the circle is " << A << '\n';
    std::cout <<"The Volume of the circle is "<< C << '\n';

    return 0;
}