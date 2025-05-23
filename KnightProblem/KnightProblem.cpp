#include <iostream>
#include <iomanip>
#include "KnightProblem.h"

// the valid steps for the knight (xMoves[i],yMoves[i])
const std::array<int, 8> KnightProblem::xMoves = { 2, 1, -1, -2, -2, -1, 1, 2 };
const std::array<int, 8> KnightProblem::yMoves = { 1, 2, 2, 1, -1, -2, -2, -1 };

KnightProblem::KnightProblem(){

    // solution matrix stores the counter value (what is the order of steps)
    solutionMatrix.resize(BOARD_SIZE);
    for (auto &subMatrix : solutionMatrix)
        subMatrix.resize(BOARD_SIZE);
    initializeBoard();
}

void KnightProblem::solveKnightProblem(){
    // the knight start from (0,0)
    solutionMatrix[0][0] = 0;

    // no solution
    if (!solveProblem(1,0,0)){
        std::cout << "No feasible solution...";
        return;
    }

    //there is a valid solution -> show
    showSolution();
}

bool KnightProblem::solveProblem(int stepCount, int x, int y){
    // if we have done the last: WE ARE DONE (knight has visited all the cells)
    if (stepCount == BOARD_SIZE * BOARD_SIZE){
        return true;
    }
    // let's consider all the moves a knight can make
    for (size_t i = 0; i < xMoves.size(); ++i){
        // moves for the x and y coordinates
        int nextX = x + xMoves[i];
        int nextY = y + yMoves[i];

        // is it a valid move for the knight?
        if (isValidMove(nextX, nextY)){
            // the move is valid so take it
            solutionMatrix[nextX][nextY] = stepCount;
            // let's try to find the next step
            if (solveProblem(stepCount+1, nextX, nextY)){
                return true; // good solution, keep going
            }
            // BACKTRACKING: we have to modify previous steps
            // remove from solutions --> backtracking
            solutionMatrix[nextX][nextY] = INT_MIN;
        }
    }
    // we have considered all the moves but none of them are valid so we have to backtrack
    return false;
}

bool KnightProblem::isValidMove(int x, int y){
    // knight is out of the board (horizontally)
    if (x < 0 || x >= BOARD_SIZE)
        return false;
    // knight is out of the board (vertically)
    if (y < 0 || y >= BOARD_SIZE)
        return false;
    // knight is already stepped on this cell in the past
    if (solutionMatrix[x][y] != INT_MIN)
        return false;
    // (x,y) cell is a valid move for the knight
    return true;
}

void KnightProblem::showSolution(){
    for (int i = 0; i < BOARD_SIZE; ++i){
        std::cout << std::left;
        for (int j = 0; j < BOARD_SIZE; ++j){
            std::cout << std::setw(2) << solutionMatrix[i][j] << std::setw(2) << ' ';
        }
        std::cout << '\n';
    }
}

void KnightProblem::initializeBoard(){
    // INT_MIN means the knight have not stepped on that cell (x,y)
    for (int x = 0; x < BOARD_SIZE; ++x)
        for (int y = 0; y < BOARD_SIZE; ++y)
            solutionMatrix[x][y] = INT_MIN;
}