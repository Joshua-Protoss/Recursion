#include <iostream>

// object = A collection of attributes and methods, They can have characteristics
//          and perform actions. Can be used to mimic real world items (phone, book,)
//          Created from a class which acts as a "blue-print"

class Human{
    public:
        std::string name = "Patrick";
        std::string occupation = "student";
        int age = 23;

        void eat(){
            std::cout << "eating... \n";

        }
        void drink(){
            std::cout << "drinking... \n";

        }
        void sleep(){
            std::cout << "sleeping.. \n";
        }

};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "accelerate.. \n";
            
        }

        void brake(){
            std::cout << "brake.... \n"; 
        }
};

int main(){

    Human human1;
    Car car1;

    car1.make = "Ford";
    car1.model = "mustang";
    car1.year = 2023;
    car1.color = "silver";

    human1.name = "Rick";
    human1. occupation = "scientist";
    human1.age = 70;

    std::cout << human1.name << "\n";
    std::cout << human1.occupation << "\n";
    std::cout << human1.age << "\n";

    human1.eat();
    human1.drink();
    human1.sleep();

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}