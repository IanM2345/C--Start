#include <iostream>

int main(){
     
    for(int i=0 ; i<=20 ; i++){
       /*if(i ==13){
            break;
        }*/ 
       if(i == 13){
        continue;
       }
        std::cout << i <<'\n';
    }

    return 0;
}