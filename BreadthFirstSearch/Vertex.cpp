#include "Vertex.h"
#include <iostream>

//constructor
Vertex::Vertex(const std::string &_name)
    :name(_name)
    {

    }

    //destructor
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

    const std::vector<Vertex *> &Vertex::getNeighbourList() const {
        return neighbours;
    }

    void Vertex::addNeighbour(Vertex *neighbour) {
        neighbours.push_back(neighbour);
    }

    //when we print out the object we can decide what to show (in this case the name)
    std::ostream &operator<<(std::ostream& strm, const Vertex &vertex) {
        strm << vertex.name;
        return strm;
    }