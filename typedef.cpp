#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;[
//typedef std::string text_t;
//typedef int number;

using text_t = std::string;
using number = int;

int main(){
     
    text_t firstname = "man";
    number age = 19;

    std::cout << firstname << " age:" << age;

    return 0;
}