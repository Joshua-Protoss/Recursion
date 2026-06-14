#include <iostream>
#include <ctime>

int main(){
    srand(time(0));

    int randNum = rand() % 6 + 1;

    std::cout << randNum << "\n";

    return 0;
}