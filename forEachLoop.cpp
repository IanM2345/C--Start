#include <iostream>

int main (){

    std::string bluelock11 [] ={"Yoichi Isagi","Rin Itoshi","Nagi Seshiro","Haimida Chigiri"};

    for(std::string player : bluelock11 ){
        std::cout << player << '\n';
    }

    return 0;
}