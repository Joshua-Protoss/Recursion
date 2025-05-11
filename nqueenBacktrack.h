#pragma once
#include <vector>

class QueensProblem{

    std::vector<std::vector<int>> chessTable;
    int numOfQueens = 0;

public:
    QueensProblem(int _numOfQueens);
    void solve();

private:
    bool setQueens(int colIndex);
    bool isPlaceValid(int rowIndex, int colIndex) const;
    void printQueens() const;
};