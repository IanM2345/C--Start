#include <iostream>

int main(){
   //Datatypes
      //int
    int wholeNumber; // declaration
    wholeNumber= 7;//asignment
    int students=1;
    int randomSum=1+7;
    int age= 19;

    //double
    double decimal=7.6;
    double price=3.5;

    //char
    char grade='C';
    char initial='I';

    //boolean
   bool student = true;
   bool teacher = false;

     //string

     std::string name ="Ian Mwai Gachoki";

   //Output
    std::cout << wholeNumber <<'\n';
    std::cout << students <<'\n';
    std::cout << randomSum <<'\n';
    std::cout << decimal <<'\n';
    std::cout << price <<'\n';
    std::cout << grade <<'\n';
    std::cout << initial <<'\n';
    std::cout <<"Hello "<< name <<'\n';
    std::cout << "You are " << age << " years old." << '\n';


    return 0;
}