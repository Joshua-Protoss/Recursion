#include <iostream>
// dynamic memory = Memory that is allocated after the program is already compiled & running.
//                  Use the 'new' operator to allocate memory in the heap rather that the stack
//                  Useful when we don't know how much memory we will need.
//                  Makes our programs more flexible, especially when accepting user input

int main(){

    int *pNum = NULL;

    pNum = new int;
    
    *pNum = 21;
    std::cout << "address: " << pNum << "\n";
    std::cout << "value: " << *pNum << "\n";

    delete pNum;

    char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in? : ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i =0; i < size; i++){
        std::cout << "Enter grade # " << i + 1 << ": ";
        std::cin >> pGrades[i];

    }

    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";

    }

    delete[] pGrades;   // add bracket to delete array pointer

    return 0;
}