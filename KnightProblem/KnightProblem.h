#pragma once // or use ifndef
#include <vector>
#include <array>

class KnightProblem{

    // cells store integers (step)
    std::vector<std::vector<int>> solutionMatrix;
    // steps horizontally
    const static std::array<int, 8> xMoves;
    // steps vertically
    const static std::array<int, 8> yMoves; // Declaring a static variable in an object has the effect that this value is the same for all instances of the object

    constexpr static int BOARD_SIZE = 8; // computations at compile time

public:
    KnightProblem();

    void solveKnightProblem();
    bool solveProblem(int stepCount, int x, int y);
    bool isValidMove(int x, int y);
    void showSolution();

private:
    void initializeBoard();

};