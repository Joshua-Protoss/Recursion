#include "Vertex.h"

// constructor
Vertex::Vertex(const std::string &_name) // using const so _name can't be accidentally changed, & is to get the address directly instead of making new copy
    :name(_name) // without const _name can be modified
{

}

// destructor
Vertex::~Vertex() = default;

const std::string &Vertex::getName() const {
    return name;
}

void Vertex::setName(const std::string &name) {
    this->name = name;
}

bool Vertex::isVisited() const {
    return visited;
}

void Vertex::setVisited(bool visited) {
    this->visited = visited;
}

const std::vector<Vertex *> &Vertex::getNeighbourList() const { // getter
    return neighbours;
}

void Vertex::addNeighbour(Vertex *neighbour) { // setter
    neighbours.push_back(neighbour);
}

// we want to print out the name of the vertex when printing out the objet
std::ostream &operator<<(std::ostream& strm, const Vertex &vertex) { // overloading the stream insertion operator (<<) for the vertex class
    strm << vertex.name;
    return strm;
} 