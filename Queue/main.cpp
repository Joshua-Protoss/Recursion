#include <iostream>
#include "Queue.h"

int main()
{
    Queue<int> queue{};

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << queue.dequeue() << '\n';
    std::cout << queue.size() << '\n';
    std::cout << queue.dequeue() << '\n';
    std::cout << queue.dequeue() << '\n';
    std::cout << queue.size() << '\n';

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    std::cout << queue.dequeue() << '\n';
    std::cout << queue.size() << '\n';

    return 0;

}
