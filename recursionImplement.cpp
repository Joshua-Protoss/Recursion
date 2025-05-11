#include <iostream>

void tail(int n){

    if(n ==0) return;

    // do operations
    std::cout << "Tail function called with n = " << n << std::endl;

    // recursion
    tail(n-1);
}

void head(int n){

    if(n ==0) return;

    // recursion
    head(n-1);

    // do operations
    std::cout << "Head function called with n = " << n << std::endl;
}

int main(){

    tail(5);
    return 0;
}