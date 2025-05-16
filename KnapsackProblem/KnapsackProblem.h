#ifndef KNAPSACKPROBLEM_H
#define KNAPSACKPROBLEM_H
#include <vector>

class Knapsack{

    int numOfItems;
    int capacityOfKnapsack;
    std::vector<std::vector<int>> knapsackTable;
    int totalBenefit = 0;
    std::vector<int> weights;
    std::vector<int> values;

public:
    Knapsack(int numOfItems, int capacityOfKnapsack, const std::vector<int> &weights, const std::vector<int> &values);
    void operator()();
    void showResult();
};

#endif