#include <iostream>
#include "DynamicFibonacci.h"

// exponential running time complexity
FibonacciAlgorithm::FibonacciAlgorithm(){
    memorizeTable.resize(100);
    memorizeTable[0] = 0;
    memorizeTable[1] = 1;
}

size_t FibonacciAlgorithm::fibonacciMemorize(size_t n){

    if(n==0) return 0;
    if(n==1) return 1;

    if (memorizeTable[n]!=0){
        return memorizeTable[n];
    } else{
        memorizeTable[n] = fibonacciMemorize(n-1)+fibonacciMemorize(n-2);  // better to use iterative on this part
        return memorizeTable[n];
    }
}
// exponential running time complexity
int FibonacciAlgorithm::naiveFibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return naiveFibonacci(n-1) + naiveFibonacci(n-2);
}