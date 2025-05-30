#include <iostream>
#include "StackLL.h"
#include <string>

int main()
{
    Stack<int> stack;
    stack.push(10);
    stack.push(3);

    std::cout << stack.size() << '\n';
    std::cout << stack.pop() << '\n';
    std::cout << stack.size() << '\n';
    std::cout << stack.pop() << '\n';

    return 0;
}