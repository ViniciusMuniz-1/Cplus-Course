#include <iostream>
#include <cmath>

int main(){
    double c1;
    double c2;
    double h;

    std::cout << "Type the first cathetus: ";
    std::cin >> c1;
    std::cout << "Type the second cathetus: ";
    std::cin >> c2;
    
    c1 = pow(c1,2);
    c2 = pow(c2,2);

    h = sqrt(c1+c2);

    std::cout << "The hypotenuse is: " << h;
    return 0;
}