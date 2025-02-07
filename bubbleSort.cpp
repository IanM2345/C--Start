#include <iostream>

void sort(int numbers[], int size);

int main(){

    int numbers [] ={ 2,3,56,12,87,9,21,34,56,87 };
    int size = sizeof(numbers)/sizeof(int);

    for (int number:numbers){
      std::cout<<number<<'\n';
    }

    sort(numbers,size);

    return 0;
}
void sort(int numbers[],int size){

    int temp;

    for(int i=0; i<size-1;i++){
        for(int j=i+1;j<size-1-i;j++){

            if(numbers[j]>numbers [j+1]){
                temp=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=temp;
            }

        }
    }

}