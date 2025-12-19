#include "Vertex.h"
#include "Edge.h"
#include <cassert>

Vertex::Vertex(std::string const &name)
{
    this->name = name;
}

std::string Vertex::getName() const
{
    return name;
}

void Vertex::addNeighbour(Edge *edge)
{
    if(edge)
    {
        assert(edge->getStartVertex().get() == this);
        adjacenciesList.push_back(edge);
    }
}

const std::vector<Edge *> &Vertex::getAdjacenciesList()
{
    return adjacenciesList;
}

Vertex *Vertex::getPredecessor() const
{
    return predecessor;
}

void Vertex::setPredecessor(Vertex *predecessor)
{
    this->predecessor = predecessor;
}

double Vertex::getMinDistance() const
{
    return minDistance;
}

void Vertex::setMinDistance(double distance)
{
    minDistance = distance;
}

std::ostream &operator<<(std::ostream &strm, const Vertex &vert)
{
    strm << vert.name;
    return strm;
}

bool Vertex::operator<(const Vertex &other) const
{
    return minDistance < other.minDistance;
}