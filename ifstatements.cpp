#include <iostream>

int main(){
    int age;
    
    std::cout << "Type your age: ";
    std::cin >> age;
    if(age >= 100){
        std::cout << "Are you alive?";
    }
    else if(age >= 18){
        std::cout << "Ok";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet";
    }
    else{
        std::cout << "You are not old enough";
    }

    return 0;
}