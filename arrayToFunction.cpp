#include <iostream>

double getTotal (double prices[],int size);

int main(){

    double prices[] = {34.64, 20.98,213.90};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices,size);

    std::cout<<"The total price is: " <<total <<'\n';

    return 0;
}

double getTotal (double prices[],int size){

  double total ;

  for (int i = 0; i < size; i++){
    total += prices[i];
  }

    return total;

}