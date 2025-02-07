#include <iostream>

void topStriker(std::string name,int transferValue){
    std::cout << "The top striker in Blue Lock is " << name<< '\n';
    std::cout<< "He is Currently valued at " << transferValue << " Yen" <<'\n';
    std::cout<< "Behind Michael Kaiser" ;
}

int main(){

    std::string name ="Yoichi Isagi";
    int transferValue = 250000000;

    topStriker(name,transferValue);

    return 0;
}