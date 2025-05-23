#ifndef DynamicFibonacci_h
#define DynamicFibonacci_h
#include <vector>

class FibonacciAlgorithm{
    // we could use an associative array BUT note that the indexes would be 0,1,2,3.. which are array indexes
    // so it is more efficient to use a vector instead
    std::vector<size_t> memorizeTable;

public:
    FibonacciAlgorithm();
    size_t fibonacciMemorize(size_t n);
    int naiveFibonacci(int n);
};



#endif