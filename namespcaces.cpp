#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    using namespace first;

    using std::cout;
    using std::string;

    cout << x;

    return 0;
}