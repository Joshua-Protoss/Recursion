#include <iostream>

int factorial(int n){

    if(n==0) return 1;

    // call recursively
    

    // do some operations

    return n * factorial(n-1);

}

int fact(int n, int acc){

    if(n==0) return acc;

    return fact(n-1, n * acc);

}

int main(){

    std::cout << factorial(3) << std::endl;
    return 0;
}