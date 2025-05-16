#include <iostream>
#include <vector>
#include "KnapsackProblem.cpp"

int main(int argc, const char * argv[]){
    int numOfItems = 3;
    int capacityOfKnapsack = 5;
    std::vector<int> weightOfItems(4);
    weightOfItems[1] = 3;
    weightOfItems[2] = 2;
    weightOfItems[3] = 4;

    std::vector<int> profitOfItems(4);
    profitOfItems[1] = 7;
    profitOfItems[2] = 4;
    profitOfItems[3] = 10;

    Knapsack knapsack(numOfItems, capacityOfKnapsack, weightOfItems, profitOfItems);
    knapsack();
    knapsack.showResult();

    return 0;
}
