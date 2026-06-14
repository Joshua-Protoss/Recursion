#include <iostream>

// recursion = a programming technique where a function invokes itself from within
//             break a complex concept into a repeatable single step
// (iterative vs recursive)
// advantages = less code and is cleaner, useful for sorting and searching algorithms
// disadvantages = uses more memory, slower

void walk(int steps); // iterative
void walkRec(int steps); // recursive
int factorial(int num); // iterative
int factorialRec(int num); // recursive

int main(){

 //   walk(10);
//     walkRec(10);
//  std::cout << factorial(10);
    std::cout << factorialRec(10);

    return 0;
}

void walk(int steps){   // iterative
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step! \n";
    }
}

void walkRec(int steps){   // iterative
    if(steps > 0){
        std::cout << "You take a step! \n";
        walkRec(steps - 1);
    }

}

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result = result * i;
    }

    return result;

}

int factorialRec(int num){
    if(num > 1){
          return num * factorialRec(num -1);
    }
    else{
        return 1;
    }

}