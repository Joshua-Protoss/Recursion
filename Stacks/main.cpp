#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
    Stack<std::string> stack;
    stack.push("Mama");
    stack.push("Joe");

    std::cout << stack.size() << '\n';
    std::cout << stack.pop() << '\n';
    std::cout << stack.size() << '\n';
    std::cout << stack.pop() << '\n';

    return 0;

}
