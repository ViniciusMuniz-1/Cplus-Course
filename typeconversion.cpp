#include <iostream>

int main(){
    int correct = 8;
    int total = 10;
    double score = correct/(double)total * 100;
    std::cout << score << "%";

    return 0;
}