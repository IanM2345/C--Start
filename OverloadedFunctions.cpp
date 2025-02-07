#include <iostream>

void chooseBlueLock11();
void chooseBlueLock11(std::string name, int goals);

int main(){

    std::string name;
    int goals;

    std::cout<<"Enter your name: "<<'\n';
    std::getline(std::cin,name);
     if (name.empty()){
        chooseBlueLock11();
    }else{
    std::cout<<"How Many goal involvements so far: "<<'\n';
    std::cin>>goals;

    chooseBlueLock11(name,goals);
     }
     

    return 0;
}

void chooseBlueLock11(){
    std::cout<<"Lock OFF"<<'\n';
}

void chooseBlueLock11(std::string name, int goals){
    if(goals==12){
        std::cout<<"Welcome you egoist"<<'\n';
    }else if(goals>=6){
        std::cout<<"You start but not as a striker. If you have a problem with that, do better!"<<'\n';
    }else if(goals>3){
        std::cout<<"You are on the bench, diamond in the rough"<<'\n';
    }else{
        std::cout<<"Lock OFF"<<'\n';
    }
}