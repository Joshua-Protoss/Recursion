#include <iostream>

class Shape{
    public:
        double area;
        double volume;

};
class Cube : public Shape{
    public:
        double side;
        Cube(double side){
            this->side = side;
            this->area = side * side * 6;
            this->volume = side * side * side;
        }

};
class Sphere : public Shape{
    public:
        double radius;
        Sphere(double radius){
            this->radius = radius;
            this->area = 4 * 3.14159 * radius * radius;
            this->volume = 4 * 3.14159 * radius * radius * radius / 3.0;
        }
};

int main(){
    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Area: " << cube.area << " cm2 \n";
    std::cout << "Volume: " << cube.volume << " cm3 \n";

    std::cout << "Area: " << sphere.area << " cm2 \n";
    std::cout << "Volume: " << sphere.volume << " cm3 \n";

    return 0;
}