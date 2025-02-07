#include <iostream>
#include <ctime>

int main () {
// Random Event genertor based off the board game of monopoly to mimic possible events from the go position at start of the game

    std::string input;

    std::cout<< "Welcome to monopoly" << '\n';
    std::cout<< "Enter anything to roll die" << '\n';
    std::cin >> input;

    bool propertyOwned = false;
    double balance = 100000;

    do
    {
        srand(time(0));
        int die1 = rand()%6+1;
        int die2 = rand()%6+1;
        int communityChestReward = rand()%200 +1;
        int luck = rand()%2;

        int value = die1+die2;

        std::cout<< "You rolled a "<< die1 << " and " << die2 <<'\n';

        switch (value){
            case 2:
              if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on north carolina avenue" <<'\n';
              
              break;
            case 3:
               std::cout<<"You Landed on a community chest. Draw a community chest card";
               balance += communityChestReward;
               std::cout<< "You got a reward of " << communityChestReward << " dollars" <<'\n';
               std::cout<< "Your new balance is " << balance ;
               break;
            case 4:
               if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on pennsylvenia avenue" <<'\n';
              
              break;
            case 5:
                if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on a short line" <<'\n';
              break;
            case 6:
               std::cout<<"You landed on chance"<<'\n';
               if(luck==0){
                std::cout<< "You were cuaght money laundering. Go to jail." <<'\n';
               }else{
                std::cout<< "Advance to go. Collect $200" <<'\n';
                balance += 200;
                std::cout<< "Your new balance is " << balance ;
               }
               break;
            case 7:
            if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on park place" <<'\n';
              break;
            case 8:
                std::cout<< "You landed on a luxury tax. Pay $100"<<'\n';
                balance-=100;
                std::cout<< "Your new balance is " << balance ;
                break;
            case 9:
            if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on board walk" <<'\n';
              break;
            case 10:
               std::cout<<"You're now in jail"<<'\n';
               std::cout<<"You need to roll a 12 or pay 150 to walk free";
               int choice;
               std::cout<<"Enter 1 to roll die or Enter 2 to pay fine"<<'\n';
               std::cin>>choice;
                 if (choice==1) {
                    int roll = rand() %12+1;
                  if(roll==12){
                    std::cout<<"You are free";
                  }else{
                    std::cout<<"Woomp Woomp";
                  }
                 }else {
                   balance-=150;
                   std::cout<< "Your new balance is " << balance ;
                 }

                 break;
                 
            case 11:
            if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on Marvin Gardens" <<'\n';
                break;
            case 12:
            if(propertyOwned==true){
                std::cout<< "You landed on owned property you own, you have to pay $200" <<'\n';
                balance -= 200;
                std::cout<< "Your new balance is " << balance ;
              }
                std::cout<< "You landed on water works" <<'\n';
                break;
         }



    }while (input.empty());
    


    return 0;

}