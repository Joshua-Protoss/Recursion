#ifndef BreadthFirstSearch_h
#define BreadthFirstSearch_h

#include "Vertex.h"
#include <deque>
#include <iostream>
#include <memory>

class BreadthFirstSearch {
public:
    void operator()(std::shared_ptr<Vertex> root) const;
};

#endif
