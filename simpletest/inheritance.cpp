#include <iostream>
// inheritance = A class can receive attributes and methods from another class.
//               Children classes inherit from a Parent class.
//               Helps to reuse similar code found within multiple classes

class Animal{
    public:
        bool alive = true;
        
    void eat(){
        std::cout << "eating... \n";
    }
};

class Dog : public Animal{
    public:

    void bark(){
        std::cout << "whoof... \n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "meow... \n";
    }

};

int main(){
    Dog dog1;
    Cat cat1;

    std::cout << dog1.alive << '\n';
    dog1.eat();
    dog1.bark();

    cat1.eat();
    cat1.meow();

    return 0;
}