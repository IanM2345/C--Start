#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12)"<<'\n';
    std::cin >> month;

    switch(month){
        case 1:
           std::cout<< "Its is January. How are your finances looking after the holidays?"<<'\n';
           break;
        case 2:
           std::cout<< "Its is Feburary. Alone again for another valentines?" <<'\n';
           break;
        case 3:
           std::cout<<"Its March. I swear march used to be the month for easter"<<'\n';
           break;
        case 4:
           std::cout<<"It's April. Are you a fool because its april fools? Or Are is it april fools because you are a fool?"<<'\n';
           break;
        case 5:
           std::cout<<"Its May. What even happens in May? Its just sports seasons ending or begining?"<<'\n';
           break;
        case 6:
           std::cout<<"Its June. Happy pride month."<<'\n';
           break;
        case 7:
           std::cout<<"Its July. HAPPY FOURTH OF JULY FOR AMERICANS I GUEESS"<<'\n';
           break;
        case 8:
           std::cout<<"Its August. Ok another dull one literally nth comes to mind."<<'\n';
           break;
        case 9:
           std::cout<<"Its Septemebr. Uni students say goodbye to the comfortof their homes and go back to well..you know"<<'\n';
           break;
        case 10:
           std::cout<<"Its October. Happy Halloween."<<'\n';
           break;
        case 11:
           std::cout<<"Its Novemeber. I dont normally celebrate thanksgiving"<<'\n';
           break;
        case 12:
            std::cout<<"Its Decemeber already. Merry chrsitmas and happy new year. Sorry that its another year of unaccomplished goalsbut you will surely accomlish them necxt year."<<'\n';
            break;
        default:
           std::cout<<"1-12 please mate";
    }

    return 0;
}