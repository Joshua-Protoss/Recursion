#include "Edge.h"

Edge::Edge(double _weight, const std::shared_ptr<Vertex> &_startVertex, const std::shared_ptr<Vertex> &_targetVertex)
        : weight(_weight), startVertex(_startVertex), targetVertex(_targetVertex)
{

}

double Edge::getWeight() const
{
    return weight;
}

std::shared_ptr<Vertex> Edge::getStartVertex() const
{
    return startVertex;
}

std::shared_ptr<Vertex> Edge::getTargetVertex() const
{
    return targetVertex;
}