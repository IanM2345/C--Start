#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
char showChoice(char choice);
char chooseWinner(char player,char winner);

int main (){

    char player;
    char computer;

    player=getUserChoice();
    std::cout<< "Your choice: "<<'\n';
    showChoice(player);
    computer=getComputerChoice();
    std::cout<< "Computer choice: "<<'\n';
    showChoice(computer);

    return 0;
}

char getUserChoice(){

    char player;
    std::cout <<"Rock-Paper-Scissors Game!"<<'\n';

   do {
    std::cout<<"'r' for rock"<<'\n';
    std::cout<<"'p' for rock"<<'\n';
    std::cout<<"'s' for rock"<<'\n';
    std::cin >> player;
   } while (player!='r'&&player!='p'&&player!='s');
   
    return player;

}
char getComputerChoice(){
    
    srand(time(0));

    char computer = rand() % 3+1;

    if(computer = 3){
        computer = 's';
    }else if(computer = 2){
        computer = 'p';
    }else{
        computer = 'r';
    }

    return computer;

}
char showChoice(char choice){

    switch (choice)
    {
    case 'r':
        std::cout<<"You choose rock"<<'\n';
        break;

    case 'p':
       std::cout<<"You choose paper"<<'\n';
    
    case 's':
       std::cout<<"You choose scissors"<<'\n';
    
    default:
        break;
    }

}
char chooseWinner(char player, char computer){

    switch(player){
        case 'r':
        if (computer == 'r'){
            std::cout<<"It's a tie"<<'\n';
        }else if (computer == 'p'){
            std::cout<<"Paper covers rock, you lose"<<'\n';
        }else{
            std::cout<<"Rock crushes scissors, you win"<<'\n';
        }
        break;
        case 'p':
        if (computer == 'p'){
            std::cout<<"It's a tie"<<'\n';
        }else if (computer == 's'){
            std::cout<<"Paper covers rock, you lose"<<'\n';
        }else{
            std::cout<<"Rock crushes scissors, you win"<<'\n';
        }
        break;
        case 's':
        if (computer == 'r'){
            std::cout<<"It's a tie"<<'\n';
        }else if (computer == 'r'){
            std::cout<<"Paper covers rock, you lose"<<'\n';
        }else{
            std::cout<<"Rock crushes scissors, you win"<<'\n';
        }
        break;
    }

}