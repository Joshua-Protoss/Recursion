#ifndef DepthFirstSearch_h
#define DepthFirstSearch_h

#include "Vertex.h"
#include <vector>
#include <memory>
#include <iostream>

class DepthFirstSearch {
    std::vector<std::shared_ptr<Vertex>> vertexList;

public:
    DepthFirstSearch(std::vector<std::shared_ptr<Vertex>> const &_vertexList);
    void operator()();
    void printVertices() const;

private:
    void dfs(Vertex *vertex);
};

#endif