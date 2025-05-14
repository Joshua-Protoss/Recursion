#include <iostream>
#include "DynamicFibonacci.cpp"

int main() {
    FibonacciAlgorithm FibonacciAlgorithm;
    std::cout << FibonacciAlgorithm.fibonacciMemorize(60) << '\n' << std::endl;
    // std::cout << fibonacciAlgorithm.naiveFibonacci(60) << '\n'; // change the data type from int to size_t because its to BEEG for 60

    return 0;
}
