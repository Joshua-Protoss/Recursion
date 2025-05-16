#pragma once
#include <memory>

// we can implement queue abstract data type with linked list as an underlying data structure
template<class t_Data>
class Queue
{
    // linked list data structure has nodes
    struct Node
    {
        t_Data data;
        std::unique_ptr<Node> nextNode;

        Node(const t_Data &_data) : data(_data) {}
    };
    // if we want to make sure that enqueue/dequeue operations will have O(1) running time
    // we have to store a reference to the head (first node) and to the tail (last node)
    std::unique_ptr<Node> firstNode;
    Node *lastNode = nullptr;
    int count = 0;

public:
    // checking wether the queue is empty or not
    bool isEmpty() const {
        return firstNode == nullptr;
    }

    // we count the number of nodes so thats why this operation has O(1) running time
    int size() const {
        return count;
    }

    // adding item to the queue in O(1)
    // we keep inserting new items to the end of the queue
    void enqueue(const t_Data &newData) {
        ++count;
        Node *oldLastNode = lastNode;
        auto newLastNode = std::make_unique<Node>(newData);
        lastNode = newLastNode.get();

        // for the first node: it is the first as well as the last node
        if (isEmpty()) {
            firstNode = std::move(newLastNode);
        } else {
            // updating the reference
            oldLastNode->nextNode = std::move(newLastNode);
        }
    }

    // removing item in O(1)
    // we keep removing items from the end of the queue
    t_Data dequeue() {
        // if the queue is empty then we return
        if (isEmpty())
            throw std::out_of_range("Queue is empty.");
        
        --count;

        // remove the first item and update the references
        t_Data dataToDequeue = std::move(firstNode->data);
        std::unique_ptr<Node> temp = std::move(firstNode->nextNode);
        firstNode = std::move(temp);

        // if we call dequeque when there is just 1 item in the queue
        if (isEmpty()){
            lastNode = nullptr;
        }
        return dataToDequeue;
    }
};