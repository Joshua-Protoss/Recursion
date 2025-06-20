#pragma once
#include <memory>

template<class t_Data>
class Stack
{
    t_Data *stack = nullptr;
    int numberOfItems = 0;
    int capacity = 0;
public:
    // at the beginning the array size is 1
    Stack(){
        stack = new t_Data[1];
        capacity = 1;
    }
    // we have to delete the array in the end
    ~Stack(){
        delete[] stack;
    }

    // we push a given item onto the stack
    // O(1) if no need to resize
    void push(const t_Data &item){
        // sometimes we have to resize the array [O(N)]
        if (numberOfItems == capacity){
            resize(2 * capacity);
        }
        // insert the given item into the array
        stack[numberOfItems++] = item;
    }

    t_Data pop(){   // O(1) if no need to resize
        // the stack may be empty -> check
        if (isEmpty())
            throw std::out_of_range("Stack is empty.");
        
        // the item we want to pop
        t_Data itemToPop = stack[--numberOfItems];

        // if we have popped too many items: we have to resize the array [O(N)]
        if (numberOfItems > 0 && numberOfItems == capacity / 4){
            resize(capacity / 2);
        }
        // return the item itself
        return itemToPop;
    }

    bool isEmpty() const {  // O(1) operation
        return numberOfItems == 0;
    }

    int size() const {  // O(1) operation
        return numberOfItems;
    }

    // O(n) because we have to copy items one by one
    void resize(int _capacity){
        t_Data *stackCopy= new t_Data[_capacity];
        
        for (int i=0; i<numberOfItems; i++) {
            stackCopy[i] = stack[i];
        }

        delete[] stack;
        stack = stackCopy;
        capacity = _capacity;
    }
};