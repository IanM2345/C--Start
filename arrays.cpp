#include <iostream>

int main(){

    std::string specialGrade[] = {"Saturo Gojo", "Ryomen Sukuna"};

    specialGrade[2]="Suguro Geto";

    std::cout<<specialGrade[0]<<'\n';
    std::cout<<specialGrade[1]<<'\n';
    std::cout<<specialGrade[2]<<'\n';

    std::string cursedClans[4];

    cursedClans[0]="Gojo Clan";
    cursedClans[1]="Zenin Clan";

    std::cout<<cursedClans[0]<<'\n';
    std::cout<<cursedClans[1]<<'\n';

    return 0;
}