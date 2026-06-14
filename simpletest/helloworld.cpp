#include <iostream>
#include <vector>
#include <cmath>

// Namespace = provides a solution for preventing name conflicts in large projects
namespace first{
    int x = 1;
}

// typedef = reserved keyword used to create an additional name (alias) for another data type
//           New identifier for an existing type
//           Helps with readability and reduces typos
//           Need to include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
using number_t = int;

int main(){

    std::cout << "I like Nasi goreng!" << '\n'; // '\n' is better computationally
    std::cout << "It's really good!" << std::endl; // endl flush the last output
    
    // string
    std::string nameTest = "Hue";
    std::cout << "Hello " << nameTest << "\n";

    // const keyword specifies that a variable's value is constant --> tells compiler to prevent anything from modifying it (read only)
    const double PI = 3.14159;  // uppercase for constant
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << "\n";

    // namespace int x
    int x  = 0;
    std::cout << x << " " << first::x << std::endl;

    //typedef
    pairlist_t pairlist;
    text_t firstName = "Row";
    number_t ageTest = 21;

    std::cout << firstName << "\n";
    std::cout << ageTest << std::endl;
    
    // user input using cin
    std::string name;
    int age;

    std::cout << "what's your age?: ";
    std::cin >> age;
    std::cout << "what's your full name?: ";
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << "\n";
    std::cout << "you are: " << age << " Years old" << std::endl;
    
    // Useful math related functions
    double xm = 3;
    double ym = 4;
    double zm;

    //zm = std::max(xm, ym); // std::min();

    zm = pow(2,3); // use cmath lib, zm = sqrt(9);
    std::cout << zm << std::endl;

    // ternary operator ?: = replacement to an if/else statement : condition ? expression1(true) : expression2(false);
    int grade = 75;
    grade >= 60 ? std::cout << "You Pass!" << "\n" : std::cout << "You fail!" << "\n";

    bool hungry = true;
    std::cout << (hungry ? "You are hungry" : "You are full") << std::endl;

    // do while loop = do some block of code first, Then repeat again if condition is true
    //do{
    //    std::cout >> "Enter a positive #: ";
    //    std::cin >> number;
    //}while(number < 0);

    // break; = break out of a loop
    // continue; = skip current iteration

    // Variable scope
    // Function will use local variables first instead of global, use ::variablename to use global first

    // Array
    // a data structure that can hold multiple values
    // values are accessed by an index number : variable that holds multiple values
    // array is already a reference address (memory address)

    std::string car[] = {"Corvette", "Mustang", "Camry"};
    std::cout << car[0];

    // sizeof() = determines the size in bytes of a : variable, data type, class, objects
    // std::string just hold an address of a string of text

    // fill() = Fills a range of elements with a specified value : fill(begin, end, value)
    // std::string foods[size];
    // fill(foods, foods + (size/2), "Pizza");
    // fill(foods + (size/2), foods+size, "hamburger");
    
    // for each loop : for(datatype elements : array)

    // Memory address = a location in memory where data is stored
    // a memory address can be accessed with "&" (address-of operator)

    // pointers = variable that stores a memory addrsss of another variable
    //            sometimes it's easier to work with an address
    //  & address-of operator, * dereference operator

    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointing)
    // nullptr    = keyword represents a null pointer literal
    // nullptr are helpful when determining if an address was successfully assigned to a pointer


    return 0; // 0 means working, 1 means there's problem
}