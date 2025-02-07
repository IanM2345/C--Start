#include <iostream>

int main () {

    std::string name = "Yuji Itadori";
    double gpa = 2.7;

    char grades [] ={'A','B','C','D','E'};

    std::cout << sizeof(gpa) << " bytes"<<'\n';
    std::cout << sizeof(name) << " bytes"<<'\n';
    std::cout << sizeof(grades) << " bytes"<<'\n';
    std::cout << sizeof(grades)/sizeof(char) << " bytes"<<'\n';

    return 0;
}