#include <iostream>

void add_to_int(int &ptr);
void addDifferent(int *ptr);
int main(){
    int num = 5;
    int num2 = 10;
    add_to_int(num);
    std::cout << "in main(), value of num is now: " << num << std::endl;

    std::cout << "in main(), this is the address of num2: " << &num2 << std::endl;
    addDifferent(&num2);
    std::cout << "in main(), value of num2 is now: " << num << std::endl;

    return 0;
}

void add_to_int(int &ptr){
    std::cout << "this is the received value in the function : " << ptr << '\n';
    ptr +=10;
}

void addDifferent(int *ptr){
    std::cout << "this is the received value in the function addDifferent : " << *ptr << '\n';
    std::cout << "this is the address of ptr in the function addDifferent : " << &ptr << '\n';
    std::cout << "this is the value of variable pointed to by ptr in addDifferent : " << ptr << '\n';
    *ptr += 10;

}