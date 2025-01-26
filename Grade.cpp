#include <iostream>

int main(){

    char input;

    std::cout<<"How did you do in yor exam? What grade did you get?"<<'\n';
    std::cin>>input;

    char grade = std::toupper(static_cast<unsigned char>(input));

    switch(grade){
        case 'A':
           std::cout<<"Lookie here. We have a smarty pants over here. Do you think your better than me? Huh?!"<<'\n';
           break;
        case 'B':
           std::cout<<"Dont worry kiddo. I also got a B+ in highschool and ihavent turned out too bad."<<'\n';
           break;
        case 'C':   
           std::cout<<"A grade doesnt define your future. Only you do. This is just a setback.Hold your head up"<<'\n';
           break;
        case 'D':
           std::cout<<"Hey dont be sad. In this momment right now all that matters is what you do next."<<'\n';
           break;
        case 'E':
           std::cout<<"This is not the end of your story!!";
           break;
        case 'F':
            std::cout<<"We aint in america bud.Refer to E."<<'\n';
            break;
        default:
            std::cout<<"What kind of grading system do you use?"<<'\n';
            break;
    }

    return 0;
}