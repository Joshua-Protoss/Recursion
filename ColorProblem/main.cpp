#include <iostream>
#include <vector>
//#include "graphColoring.h"
#include "graphColoring.cpp"

int main(){
    const std::vector<std::vector<int>> graphMatrix = {
        {0,1,0,1,0},
        {1,0,1,1,0},
        {0,1,0,1,0},
        {1,1,1,0,1},
        {0,0,0,1,0}
    };
    constexpr int numOfColors = 3;
    
    graphColoring GraphColoring(graphMatrix, numOfColors);
    GraphColoring();
    std::cout << graphMatrix.size() << std::endl; // .size() return the number of elements in the vector
    std::cout << graphMatrix[1][2] << std::endl; 
    return 0;
}
