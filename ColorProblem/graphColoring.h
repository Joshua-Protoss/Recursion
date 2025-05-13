#ifndef graphColoring_h
#define graphColoring_h
#include <vector>

class graphColoring {
    std::vector<std::vector<int>> graphMatrix;
    int numOfColors;
    std::vector<int> colors;

public:
    graphColoring(const std::vector<std::vector<int>> &graph, int _numOfColors);

    // solve the coloring problem
    void operator()();

private:
    // function to assign colors recursively
    bool solve(size_t nodeIndex);

    // function to check if it is valid to alloc that color to vertex
    bool isColorValid(size_t nodeIndex, size_t colorIndex);

    void showResult();

};

#endif

