#include <iostream>

int searchArray(int numbers[],int size, int myNum);

int main(){

    int numbers[] ={34,98,76,24,73,12,25,51,39,21};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout<<"Enter number to search for: "<<'\n';
    std::cin>>myNum;

    index= searchArray(numbers,size,myNum);

   if(index =-1){
    std::cout<<"Number not found"<<'\n';
   }else{
    std::cout<<"Number found at index "<<index<<'\n';
   }

    return 0;
}

int searchArray(int numbers[],int size, int myNum){

    int index;

    for (int i=0; i<size ; i++){
        if (numbers[i] == myNum){
            index = i;
        }
    }

    return -1;


}