#include <iostream>
#include <algorithm>
#include "KnapsackProblem.h"

Knapsack::Knapsack(int _numOfItems, int _capacityOfKnapsack, const std::vector<int> &_weights, const std::vector<int> &_values) 
: numOfItems(_numOfItems), capacityOfKnapsack(_capacityOfKnapsack), weights(_weights), values(_values)
{
    // table has as many rows as numOfItems+1 (with 0) and as many columns as capacity+1
    knapsackTable.resize(numOfItems + 1);
    for (auto &item : knapsackTable)
        item.resize(capacityOfKnapsack + 1);
}

void Knapsack::operator()(){
    // we keep considering more and more items wether to include in the knapsack or not
    // time complexity: O(N*W)
    for (int i=1; i<numOfItems+1; ++i){
        for(int w =1; w < capacityOfKnapsack+1; ++w){
            // maximum value of the knapsack if we do NOT take item i
            int notTakingItem = knapsackTable[i-1][w];
            int takingItem = 0;
            
            // value of the knapsack if we take item i
            // of course we have to check wether it fits in the knapsack or not (weight constraint)
            if ( weights[i] <= w){
                takingItem = values[i] + knapsackTable[i-1][w-weights[i]];
            }
            // we want to maximize our profit
            knapsackTable[i][w] = std::max(notTakingItem,takingItem);
        }
    }
    // maximum profit is the value of the last cell
    // because that is the case when we have as many item as the numOfItems
    // and as much capacity as capacityOfKnapsack
    totalBenefit = knapsackTable[numOfItems][capacityOfKnapsack];
}

void Knapsack::showResult(){
    std::cout << "Total benefit: " << totalBenefit << '\n'; // totalBenefit is stored in the heap memory (class Knapsack)

    // we start with the last row and last column item
    for (int n=numOfItems, w = capacityOfKnapsack; n > 0; --n){
        // we take the item if it's value differ from the value in the row above
        if(knapsackTable[n][w] != 0 && knapsackTable[n][w] != knapsackTable[n-1][w]){
            std::cout << "We take item: #" << n << '\n';
            // because we take that item we have to subtract the total weight
            w = w - weights[n];
        }
    }
}

