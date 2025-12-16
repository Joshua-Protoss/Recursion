#include "DepthFirstSearch.h"

// the graph itself (array of Vertexes)
DepthFirstSearch::DepthFirstSearch(std::vector<std::shared_ptr<Vertex>> const &_vertexList)
    : vertexList(_vertexList)
{
}

void DepthFirstSearch::operator()() {
    // there may be several clusters: we want to consider all of them
    for (auto vertex : vertexList) {
        if(!vertex->isVisited())
            dfs(vertex.get());
    }
    std::cout << '\n';
}

void DepthFirstSearch::dfs(Vertex *vertex){
    
    // we visit the given vertex (node in the graph)
    std::cout << *vertex << '\n';   // look at vertex.cpp ostream implementation
    // without ostream overload we have to write *vertex.name

    // visit the neighbors of that given node
    for(Vertex *v : vertex->getNeighbourList() ){
        // we do not want to revisist nodes over and over again
        if(!v->isVisited() ){
            v->setVisited(true);
            // call dfs() function recursively on the neighbors
            // BUT WHERE WE USE A STACK? we don't ... we use the OS stack memory to do so
            dfs(v);
        }
    }

}