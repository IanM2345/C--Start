#include <iostream>

int main() {
    std::string name;

    std::cout << "Enter Your Name: ";
    std::getline(std::cin, name);  

   /* if(name.length() > 12){
        std::cout << "Your name is too long." ;
    }else{
        std::cout << "Your name is " << name.length() << " characters long." ;
    }
    */

  /* if(name.empty()){
       std::cout << "Hello Mr Nobody." ;
   }else{
       std::cout << "Hello " << name << "." ;
   }
   */

   /* name.clear();
    std::cout<<"Hello" << name;
   */

    /* name.append("@gmail.com");
     std::cout << name;
    */

      /*
      std::cout<<name.at(2);
      */

     /*
     name.insert(0,"670");
      std::cout<<name;
     */
    
     std::cout<<name.find(" ");
    

    return 0;
}
