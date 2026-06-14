#include <iostream>

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]); 
    double total = getTotal(prices, size); // passing an array dont need to include []

    std::cout << "total $" << total;

    return 0;
}

// when you pass an array to a function, you only passing the address not the data
// always pass the size of the data as well

double getTotal(double prices[], int size){

    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];

    }

    return total;
}