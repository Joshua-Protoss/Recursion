#include <iostream>



struct Car{
    std::string model;
    int year;
    std::string color;

};
void printCar(Car &car);     // declare the function after the struct
void paintCar(Car &car, std::string color);

int main(){
    Car car1;
    Car car2;

    car1.model = "BYD";
    car1.year = 2022;
    car1.color = "silver";

    car2.model = "Tesla";
    car2.year = 2023;
    car2.color = "blue";

    paintCar(car1,"gold");
    paintCar(car2,"green");

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){                 // struct is pass by value rather than reference, use '&' to get the address
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';

}
void paintCar(Car &car, std::string color){
    car.color = color;

}