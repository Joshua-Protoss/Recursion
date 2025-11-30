#include "BreadthFirstSearch.h"

void BreadthFirstSearch::operator()(std::shared_ptr<Vertex> root) const {
    //breadth-first search (BFS) needs a FIFO structure -> a queue !!!
    std::deque<Vertex *> queue;
    //we start with the root node (so set it to be visited)
    root->setVisited(true);
    //add the root node to the queue
    queue.push_back(root.get());

    //while the queue is not empty (so while we have not considered all the nodes)
    while(!queue.empty()){

        //this is how we get the first item we have inserted
        Vertex *actualVertex = queue.front();
        queue.pop_front();
        std::cout << "Visit node: " << *actualVertex << "\n";
        
        //let's visit the neighbors of that given vertex
        for(Vertex *v : actualVertex->getNeighbourList()){
            // do not visit nodes more than once
            if(!v->isVisited() ){
                v->setVisited(true);
                //add the given node to the queue
                queue.push_back(v);
            }
        }
    }
}