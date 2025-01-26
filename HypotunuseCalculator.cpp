#include <iostream>
#include <cmath>

int main() {
     double A;
     double B;

   std::cout <<"Enter Side A" << '\n';
   std::cin>> A;

   std::cout <<"Eneter side B" << '\n';
   std::cin >> B;

   double H = sqrt((A*A)+(B*B));

   std::cout <<"The hypotonuse(side C) is: "<< H << '\n';

    return 0;
}