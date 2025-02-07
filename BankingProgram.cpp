#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void showBalance(double balance);
double depositMoney();
double withdrawMoney(double balance);

int main(){

    int choice;
    double balance= 100000.56;

    do{

    std::cout << "Welcome to we are definetly a bank and not a scam bank"<<'\n';
    std::cout << "Please enter 1-3 to perform the following functions: "<<'\n';
    std::cout << "1. Deposit money"<<'\n';
    std::cout << "2. Withdraw money"<<'\n';
    std::cout << "3. Check balance"<<'\n';
    std::cout << "4.Exit"<<'\n';
    std::cin>>choice;

    switch(choice){
        case 1:
           balance+=depositMoney();
           std::cout<<"Deposit succesfull. Your new balance is " <<std::setprecision(2) << std::fixed<< balance;
           break;
        case 2:
          balance= withdrawMoney(balance);
           break;
        case 3:
           showBalance(balance);
           break;
        case 4:
           break;
        default:
        std::cout<<"Invalid choice. Please try again"<<'\n';
    }

    }while (choice !=4);

    

    return 0;
}

void showBalance(double balance){

    std::cout << "Your account balance is: "<< std::setprecision(2) << std::fixed<< balance<<'\n';

}
double depositMoney(){
    double amount;
    std::cout << "Enter the amount you want to deposit: "<<'\n';
    std::cin>>amount;

    if(amount<=0){
        std::cout << "Invalid deposit amount."<<'\n';
        return 0;
    }

    return amount;

}
double withdrawMoney(double balance){
     double amount;

    std::cout<<"How much would you like to withdraw: "<<'\n';
    std::cin>>amount;

    if (amount> balance){
        std::cout<<"Insufficient balance. You account balance is "<<std::setprecision(2) << std::fixed<< balance << '\n';
    }else if(amount<=0){
        std::cout<<"Invalid witdrawal amount"<<'\n';
    }
    else{
        balance-=amount;
        std::cout<<"Withdrawal successful. Your new balance is "<<std::setprecision(2) << std::fixed<< balance<<'\n';
    }
    return balance;
}
